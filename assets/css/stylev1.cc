@import url('https://fonts.googleapis.com/css2?family=Inter:opsz,wght@14..32,100..900&display=swap');
@import url('https://fonts.googleapis.com/css2?family=Inter:ital,opsz,wght@0,14..32,100..900;1,14..32,100..900&family=Italianno&display=swap');
*{
  margin: 0;
  padding: 0;
  font-family: "Inter", sans-serif;
  box-sizing: border-box;
}
body{
  overflow-x:hidden; 
  background: #f4f3ff !important;
}
header {
  background: var(--preset--color--footer);
  color: var(--color-neutral-40);
  height: 70px;
  width: 100%;
  display: flex;
  align-items: center;
  padding: 1rem 5%;
  box-sizing: border-box;
  justify-content: space-between;
  z-index: 1000;
  box-shadow: 5px 5px 15px 0px rgba(0, 0, 0, 0.301);
}
ul {
  padding: 0;
  margin: 0;
}
ul a {
  text-decoration: none;
  color: var(--color-neutral-40);
  transition: 0.5s;
}
ul a:hover {
  letter-spacing: 2px;
}
.icons-nome {
  display: none;
}
.logo {
  display: flex;
  align-items: center;
}
.logo a > p{
  margin: auto 10px auto;
  font-size: 3.5rem;  
  font-weight: 400;
  font-family: 'Italianno', sans-serif !important;
  font-style: normal;
  color: var(--color-neutral-40);
}
.logo a{
  text-decoration: none;
}
#menu {
  display: flex;
  list-style: none;
  gap: 1.5rem;
}

#menu a {
  display: block;
  padding: 0.5rem;
}
#btn-mobile {
  display: none;
}
#menu img {
  width: 2.5rem;
  width: 2.5rem;
  transition: transform 0.5s;
}
#menu img:hover {
  transform: scale(1.2);
}

.container-camada2 {
  text-align: center;
  display: flex;
  justify-content: center;
  width: 100%;
}

.title {
  position: absolute;
  z-index: 999 !important;
  font-size: 6rem;
  color: #ffffff;
  font-family: 'Italianno', sans-serif !important;
  font-weight: 400;
  font-style: normal;
  cursor: default;
  filter: drop-shadow(0px 0px 5px rgb(157, 142, 255)) !important;
}

.image-gallery {
  display: flex;
  justify-content: center;
  width: 100%;
  gap: 0px;
}

.image-wrapper {
  overflow: hidden;
  width: 25%; /* Define a largura inicial */
  height: 400px; /* Altura fixa */
  transition: all 0.4s ease;
}

.image-wrapper img {
  width: 100%;
  height: 100%;
  object-fit: cover;
  transition: all 0.4s ease;
}

.image-wrapper:hover {
  width: 50%; /* Expande lateralmente */
}

.image-wrapper:hover img {
  transform: scale(1.1); /* Expande a imagem internamente */
}


/* CAMADA 3 */

.card-link {
  
  overflow: hidden; 
}

.popup-content {
  position: relative;
  background: #fff;
  padding: 20px;
  border-radius: 12px;
  max-width: 500px;
  text-align: left;
  z-index: 2;
}

.popup-close {
  position: absolute;
  top: -20px;
  right: 0; 
  cursor: pointer;
  font-size: 3rem; 
  padding: 10px;
  color: #000;
  transition: 0.3s ease;
}
.popup-close:hover{
  color: #5372f0;
  scale: 1.1;
}

.popup {
  display: none;
  position: fixed;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  background: rgba(0, 0, 0, 0.5);
  justify-content: center;
  align-items: center;
  z-index: 1;
}

.camada3 {
  padding-top: 20px;
}
.titulos{
  font-size: 3.5rem;
  padding: 10px 0 30px;
  color: #000;
}

figure img {
  display: none;
}
.card-wrapper{
  margin: 0 15px 35px;
  padding: 20px 10px;
  overflow: hidden;
}

.card-list .card-item{
  list-style: none;
}
.card-list .card-item .card-link{
  user-select: nome;
  display: block;
  background: #fff;
  padding: 18px;
  border-radius: 12px;
  text-decoration: none;
  border: 2px solid transparent;
  box-shadow: 0 10px 10px rgba(0, 0, 0, 0.07);
  transition: 0.2s ease;
}

.card-list .card-item .card-link:active{
  cursor: grabbing;
}

.card-list .card-item .card-link:hover{
  border-color: #5372f0;
}

.card-list .card-link .card-image{
  width: 100%;
  aspect-ratio: 16 / 9;
  object-fit: cover;
  border-radius: 10px;

}

.card-list .card-link .badge{
  color: #5372f0;
  padding: 8px 16px;
  font-size: 0.95rem;
  font-weight: 500;
  margin: 16px 0 18px;
  background: #dde4ff;
  width: fit-content;
  border-radius: 50px;
}

.card-list .card-link .badge.designer{
   color: #b22485;
   background: #f7dff5;
}

.card-list .card-link .badge.marketer{
  color: #b26a2b;
  background: #f7dff5;
}




.card-list .card-link .card-title{
  font-size: 1rem;
  color: #000;
  font-weight: 600;
}

.card-list .card-link .card-button{
  height: 35px;
  width: 35px;
  border-radius: 50%;
  margin: 30px 0 5px;
  cursor: pointer;
  transform: rotate(-45deg);
  transition: 0.4s ease;
  color: var(--preset--color--footer);
}
.card-list .card-link:hover .card-button{
  scale: 1.1;
}
.card-button.card-button:hover{
  color: #5372f0;
}

.card-wrapper .swiper-pagination-bullet{
  height: 13px;
  width: 13px;
  opacity: 0.5;
  background: #5372f0;
}

.card-wrapper .swiper-pagination-bullet-active{
  opacity: 1;
}

.card-wrapper .swiper-slide-button{
  color: #5372f0;
  margin-top: -35px;
}
/*
@media screen and (max-width: 768px) {
  .card-wrapper{
    margin: 0 10px 25px;
  }
  .card-wrapper .swiper-slide-button{
    display: nome;
  }
}
*/

/*camada4*/

.container {
  display: flex;
  flex-wrap: wrap;
  justify-content: center;
  gap: 20px;
  padding: 40px 20px;
}

.card {
  background-color: #fff;
  border-radius: 3px;
  overflow: hidden;
  box-shadow: 0px 0px 12px 3px rgb(0 0 0 / 16%);
  flex: 1 1 300px;
  max-width: 35%;
  min-width: 400px;
  height: 100%;
}
.card-image-pai{
  display: flex;
  align-items: center;
  justify-content: center;
  margin-top: 20px;
}
.card-image {
  width: 91%;
  height: 180px;
  background-size: cover;
  background-position: center;
}

.card-content {
  padding: 20px;
  flex-grow: 1;
}

.card-content h2{
  margin-bottom: 10px;
}
.card-content p {
  font-size: 1rem;
  color: #555;
  margin-bottom: 10px;
}

.btn {
  text-decoration: none;
  width: 40%;
  text-align: center;
  color: #fff;
  background-color: var(--preset--color--footer);
  padding: 10px 15px;
  border-radius: 5px;
  font-size: 1rem;
  display: inline-block;
  transition: 0.4s;
  margin-top: 20px;
}

.btn:hover {
  transform: scale(0.99);
  background-color: var(--color-neutral-10);
}

.btn span {
  font-size: 1rem;
  padding-left: 5px;
}

@media screen and (max-width: 768px) {
  .card {
    max-width: 70%;
  }
}

.title-camada{
  display: flex;
  justify-content: center;
  padding-top: 40px;
  font-size: 2rem;
}

.status{
  display: flex;
  }
  .status > p{
  color: green !important;
  font-weight: bolder;

}
.button{
  display: flex;
  align-items: center;
  justify-content: space-between;
  margin: 0;
  padding: 0;
}

.selo-verde{
  margin-top: 25px;
  cursor: help;
}

.container-404{
  display: flex;
  justify-content: center;
  align-items: center;
  flex-direction: column;
  gap: 50px;
  margin-bottom: 50px;
}

.container-login{
  display: flex;
  justify-content: center;
  align-items: center;
  height: 90vh;
}
.login{
  display: flex;
  align-items: center;
  justify-content: center;
  flex-direction: column;

}
.tradutor{
  height: 1%;
}


/* Tela de carregamento que cobre toda a página */
#loading-screen {
  position: fixed;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  background: rgba(255, 255, 255, 0.8); /* fundo branco translúcido */
  z-index: 1000;
  display: flex;
  align-items: center;
  justify-content: center;
}

/* Spinner de carregamento simples */
.spinner {
  border: 8px solid #f3f3f3; /* cor de fundo do spinner */
  border-top: 8px solid #3498db; /* cor da borda superior */
  border-radius: 50%;
  width: 50px;
  height: 50px;
  animation: spin 1s linear infinite; /* animação de rotação */
}

@keyframes spin {
  0% { transform: rotate(0deg); }
  100% { transform: rotate(360deg); }
}
