let contador = 1;

function mudarTexto() {
  document.getElementById('demo').innerHTML = `Texto alterado ${contador++}`;
}

function mudarInput() {
  document.getElementById('nome').value = `Input alterado ${contador++}`;
}

let cor = true;
const txtColorido = document.getElementById('meuTexto');
function mudarCor() {
  if (cor) {
    txtColorido.style = 'color: red;';
    cor = false;
  } else {
    txtColorido.style = 'color: white;';
    cor = true;
  }

}

function hideTxt() {
  console.log("teste hide");
  document.getElementById('shownTxt').style.visibility = 'hidden';
}

function showTxt() {
  console.log("teste show");
  document.getElementById('shownTxt').style.visibility = 'visible';
}

let c = true;
const imgAlterar = document.getElementById('imgAlterar');
const linkAlterar = document.getElementById('linkAlterar');
function changeImg() {
  if (c) {
    imgAlterar.src = 'https://samubarreto.github.io/Portfolio/source/projects/doletas-img.jpg';
    linkAlterar.href = 'https://samubarreto.github.io/Doletas/';
    c = false;
  } else {
    imgAlterar.src = 'https://samubarreto.github.io/Portfolio/source/projects/calculator-img.jpg';
    linkAlterar.href = 'https://samubarreto.github.io/js-calculator/';
    c = true;
  }
}

const inputTeclado = document.getElementById('inputTeclado');
inputTeclado.addEventListener('keypress', (event) => {
  if (event.key == 'Enter') {
    alert(`Você escreveu: ${inputTeclado.value}`);
    inputTeclado.value = '';
  }
})

const apagaTd = document.getElementById('divSumir');
const butaoInvisivel = document.getElementById('visible-button');
butaoInvisivel.addEventListener('click', () => {
  if (apagaTd.style.display === 'none') {
    butaoInvisivel.innerHTML = 'Sumir (quase) TUDO :O';
    apagaTd.style.display = 'flex';
  } else {
    apagaTd.style.display = 'none';
    butaoInvisivel.innerHTML = 'Aparecer (quase) TUDO :O';
  }
})