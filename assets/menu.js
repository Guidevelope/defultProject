function ativarMenu(event) {
  if (event.type === 'touchstart') event.preventDefault();
  const nav = document.getElementById('nav');
  nav.classList.toggle('ativar');
  const active = nav.classList.contains('ativar');
  event.currentTarget.setAttribute('aria-expanded', active);
  if (active) {
  }
}


// Quando a página for rolada em 100 px
window.onscroll = function () { scrollFunction() };

function scrollFunction() {
  if (document.body.scrollTop > 100 || document.documentElement.scrollTop > 100) {
    document.getElementById("btn-topo").style.display = "block";
  } else {
    document.getElementById("btn-topo").style.display = "none";
  }
}

function topFunction() {

  const currentScroll = document.documentElement.scrollTop || document.body.scrollTop;

  if (currentScroll > 0) {
    window.requestAnimationFrame(topFunction);
    //velocidade da animação
    window.scrollTo(0, currentScroll - (currentScroll / 8));
  }
}

const btnMobile = document.getElementById('btn-mobile');

function ativarMenu(event) {
  if (event.type === 'touchstart') event.preventDefault();
  const nav = document.getElementById('nav');
  nav.classList.toggle('ativar');
  const active = nav.classList.contains('ativar')
  event.currentTarget.setAttribute('aria-expanded', active);
  if (active) {
    event.currentTarget.setAttribute('aria-label', 'Fechar Menu')
  } else {
    event.currentTarget.setAttribute('aria-label', 'Abrir Menu')
  }
}

btnMobile.addEventListener('click', ativarMenu);
btnMobile.addEventListener('touchstart', ativarMenu);



//popup JavaScript

document.querySelectorAll('.card-button').forEach(button => {
  button.addEventListener('click', function (event) {
    event.preventDefault();

    const cardLink = this.closest('.card-link');
    const content = cardLink.getAttribute('data-content');
    const title = cardLink.querySelector('.card-title').textContent;

    document.getElementById('popup-title').textContent = title;
    document.getElementById('popup-text').textContent = content;
    document.getElementById('popup').style.display = 'flex';
  });
});

document.querySelector('.popup-close').addEventListener('click', function () {
  document.getElementById('popup').style.display = 'none';
});

// Fecha o popup ao clicar fora do conteúdo
document.getElementById('popup').addEventListener('click', function (event) {
  if (event.target === this) {
    this.style.display = 'none';
  }
});
