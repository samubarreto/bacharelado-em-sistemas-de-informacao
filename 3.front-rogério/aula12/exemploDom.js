function mudarTexto() {
  document.getElementById('demo').innerHTML = 'Texto alterado';
}

function mudarInput() {
  document.getElementById('nome').value = 'Input alterado';
}

function mudarCor() {
  document.getElementById('meuTexto').style = 'color: red;';
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