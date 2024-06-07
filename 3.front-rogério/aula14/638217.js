const handlePhone = (event) => {
  let input = event.target;
  input.value = phoneMask(input.value);
}

const phoneMask = (value) => {
  if (!value) return "";

  value = value.replace(/\D/g, ''); // Remove todos os caracteres não numéricos

  // Preencha com # se o valor tiver menos que 11 dígitos
  while (value.length < 11) {
    value += '#';
  }

  // Aplicar a máscara de telefone
  value = value.replace(/(\d{2})(\d{5})(\d{4})/, "($1) $2-$3");

  return value;
}