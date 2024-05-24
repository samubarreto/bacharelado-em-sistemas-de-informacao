import PySimpleGUI as sg
import pymysql

def cadastra_estado(uf_ce,nome_ce):
    try:
        connection = pymysql.connect(host="localhost", user="root", passwd="", database="auladql")
        cursor = connection.cursor()
        cursor.execute('INSERT INTO estado (uf,nome) VALUES (%s,%s)', (uf_ce,nome_ce))
        connection.commit()
        cursor.close()
        connection.close()
        return "Sucesso!"
    except:
        return "Erro!"

layout = [
    [sg.Text("Cadastra Estado")],
    [sg.Text("UF do Estado")],
    [sg.InputText(key="uf_estado")],
    [sg.Text("Nome do Estado")],
    [sg.InputText(key="nome_estado")],
    [sg.Button("Cadastra Estado"), sg.Button("Cancelar")],
    [sg.Text("", key="texto_estado")],
]

janela = sg.Window("Estados", layout)

while True:
    evento, valores = janela.read()
    if evento == sg.WIN_CLOSED or evento == "Cancelar":
        break
    if evento == "Cadastra Estado":
        codigo_uf = valores["uf_estado"]
        nome_uf = valores["nome_estado"]
        descricao_cadasrtro = cadastra_estado(codigo_uf,nome_uf)
        janela["texto_estado"].update(f"Operação realizada com {descricao_cadasrtro}")

janela.close()

