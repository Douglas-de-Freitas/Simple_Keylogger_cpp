/*
%a - Nome do dia da semana na forma abreviada. Ex: seg. 
%A - Nome completo do dia da semana. Ex: ter�a-feira. 
%b - Nome do m�s abreviado. Ex: abr. 
%B - Nome completo do dia do m�s. Ex: abril 
%c - Representa��o de data e hora. Ex: 23/4/2011 23:00:37. 
%d - Dia do m�s (01-31). 
%H - Hora no formato 24 horas (00-23). 
%I - Hora no formato 12 horas (01-12). 
%j - Dia do ano (001-366). 
%m - M�s como um n�mero decimal (01-12). 
%M - Minutos (00-59). 
%p - AM ou PM. 
%S - Segundos (00-61). 
%U - N�mero da semana tendo o primeiro domingo como o primeiro dia da primeira semana do ano (00-53). 
%w - Dia da semana como um n�mero decimal tendo o domingo como 0 (0-6). 
%W - N�mero da semana tendo a primeira segunda-feira como o primeiro dia da primeira semana do ano (00-53). 
%x - Representa��o de data. Ex: 23/4/2011. 
%X - Representa��o de horas. Ex: 23:00:37. 
%y - Ano de dois d�gitos (00-99). 
%Y - Ano com quatro d�gitos.
%Z - Nome ou abrevia��o do fuso hor�rio. 
%% - Um sinal de porcentagem.
*/

#include <iostream>
#include <locale>
#include <time.h>

using namespace std;

string calendar(){
  // vamos definir a localiza��o para o Portugu�s do Brasil
  setlocale(LC_ALL, "Portuguese_Brazil");
    
  time_t data_hora_segundos; // guarda os segundos deste 01/01/1970
  struct tm *timeinfo; // declara uma estrutura tm
  time(&data_hora_segundos); // preenche a vari�vel data_hora_segundos
  
  // preenche a estrutura timeinfo
  timeinfo = localtime(&data_hora_segundos);
  
  // um buffer para receber a data formatada
  char data_formatada[80];

  // vamos formatar
  strftime(data_formatada, 80, "< INICIO: %A dia %x as %H:%M >", timeinfo);
  
  return data_formatada;
    
}
