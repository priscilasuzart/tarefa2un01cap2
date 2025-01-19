Tarefa 2 - Unidade 04 - Microcontroladores - GPIO  
  
Este projeto tem como objetivo usar a porta serial UART para controlar pinos GPIO do microcontrolador RP2040 com o emprego da ferramenta educacional BitDogLab.   
Os seguintes comandos podem ser enviados via terminal serial para controlar os periféricos:  
v: liga o LED verde  
a: liga o LED azul  
r: liga o LED vermelho  
t: liga todos os LEDs  
o: desliga todos os LEDs  
b: aciona o buzzer por 2 segundos  
  
O seu funciomento consiste em:   
1) Após inicializar, o programa exibirá uma mensagem com a lista de comandos no terminal serial;
2) Digite os comandos correspondentes para manipular os LEDs ou o buzzer;  
3) Mensagens de status serão exibidas para indicar o resultado de cada ação.  
   
Requisitos necessários:   
1) Ferramenta educacional BitDogLab (versão 6.3);  
2) Cabo tipo micro-usb para usb-a;  
3) Computador pessoal;  
4) Software de terminal serial (PuTTY).  
  
Conexões utilizadas no Raspberry Pi Pico W (pinos usados):
LEDs:  
o	Verde: GPIO 11  
o	Azul: GPIO 12   
o	Vermelho: GPIO 13  
Buzzer:  
o	GPIO 21  
  
Exemplo de execução:  
Entrada: Digita o comando ‘r’  
Saída: o LED vermelho, conectado ao GPIO 13, é aceso  

Link para o vídeo ensaio:  
https://drive.google.com/file/d/1RPBtTyyKRJKymdo5Dlt_-wR4xixwsvE_/view?usp=sharing

Projeto desenvolvido por:   
Anna Luiza Rocha Neves  
Camile Vitória Lino dos Santos  
Erick Patrick Pontes Chagas  
João Marcelo Nascimento Fernandes  
João Pedro Soares Raccolto  
Priscila Pereira Suzart de Carvalho (líder)  
