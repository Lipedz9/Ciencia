
const mostrarFormularioBtn = document.getElementById('mostrarFormulario');
const formularioDiv = document.getElementById('form_ad');
const tabelaDiv = document.getElementById('tabela');
const headertableDIV =document.getElementById('headertable')

mostrarFormularioBtn.addEventListener('click', () => {
    
    if (formularioDiv.style.display === 'none'&&tabelaDiv.style.width==='80%') {
        formularioDiv.style.display = 'block';
        tabelaDiv.style.width='60%';
        headertableDIV.style.width='60%'
        tabelaDiv.classList.add('move');//para mover para o lado
        headertableDIV.classList.add('move');
    } else {
        formularioDiv.style.display = 'none';
        tabelaDiv.style.width='80%';
        headertableDIV.style.width='80%'
        tabelaDiv.classList.remove('move');
        headertableDIV.classList.remove('move');
    }
});
