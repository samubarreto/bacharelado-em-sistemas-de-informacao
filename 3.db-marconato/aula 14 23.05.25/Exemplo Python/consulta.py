import PySimpleGUI as sg
import pymysql

def busca_estado(uf_be):
    nome_est = "Não encontrado!"

    connection = pymysql.connect(host="localhost", user="root", passwd="", database="auladql",cursorclass=pymysql.cursors.DictCursor)
    cursor = connection.cursor()
    result = cursor.execute("select nome from estado WHERE uf = %s", [uf_be])
    state = cursor.fetchall()  
    for row in state:
        nome_est = row['nome']
    cursor.close()
    connection.close()
    return nome_est

layout = [
    [sg.Text("Pesquisa Estado")],
    [sg.InputText(key="uf_estado")],
    [sg.Button("Buscar Estado"), sg.Button("Cancelar")],
    [sg.Text("", key="texto_estado")],
]

janela = sg.Window("Estados", layout)

while True:
    evento, valores = janela.read()
    if evento == sg.WIN_CLOSED or evento == "Cancelar":
        break
    if evento == "Buscar Estado":
        codigo_uf = valores["uf_estado"]
        descricao_estado = busca_estado(codigo_uf)
        janela["texto_estado"].update(f"O nome do Estado UF {codigo_uf} é {descricao_estado}")

janela.close()

