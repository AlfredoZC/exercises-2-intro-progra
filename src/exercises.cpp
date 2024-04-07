
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void exercise_1(string s1) {
    for ( int i = 0 ; i<s1.size (); ++i){
        if(s1[i]==' '){
          cout<<i<<endl; 
        }
    } cout << s1.size()<<endl;
}

void exercise_2(string s1) {

}

void exercise_3(string s1) {

	string s2; // aqui guardamos la string sin espacios 
  char spaces; // Usamos char para quitar los espacios de la primera string;

	char iteracion; 
	int i = 0; 
	  
	  for(int j = 0; j<s1.size(); ++j){
	      char spaces = s1[j];
	      if ( spaces == ' '){
	          continue; 
	          
	      }else {
	          s2 += spaces;
	      }
	  }
        while (i < s2.size()) {
    	       
    	   if (i < 10 ){
    	       char iteracion = s2[i];
    	       if(iteracion == '1'){
    	       cout<<"Om-nom-nom :P"<<endl;
    	       }else if (iteracion == '0'){
    	           cout<<"No cake :("<<endl;
    	            break;
    	       }else {
    	            cout<<"Ingreso valores no validos, solo ingrese 1 o 0"<<endl;
    	            break;
	           } 
	            
    	    } else {
    	        break;
        }++i;
    	    
	}
}

void exercise_4(int n) {

  int result = 1;

  if(n >= 0 && n <=14 ){
        for(int i = 1 ; i <= n ; ++i ){
             result *= i;
		    } 
			cout<<result<<endl;
	}else if (n < 0){
		  cout<<"El numero es negativo. Intentelo de nuevo"<<endl;
		  return;
  } else {
	    cout<<"El numero es muy grande. Intentelo de nuevo"<<endl;
		  return;
		}

}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}