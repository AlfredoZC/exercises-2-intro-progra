
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

    for (int i = 1; i < n; ++i) {
        cout << "   ";
    }
    for (int j = 1; j <= k; ++j) {
        if (j < 10) {
            cout << " ";
        }
        cout << j;
        
        int salto = (j + n - 1) % 7;
        
        if (salto ==  0) {
            cout << endl;
          } else if(j == k){
			      cout<<" "<<endl;
		      }else {
            cout << " "; 
        }
    }

}

int exercise_6(int n) {

    if( n > 0){
    string number = to_string(n);
	  int suma = 0;
	  
	  for(int i = 0; i < number.size(); ++i){
	      char iterador = number [i];
	      suma += (iterador - '0');
	  } cout<<suma;
      return suma;

    }else{
      return 0;
    }

}

void exercise_7(int n) {

	  double result = 0.0;
	  int signo = 1; 
    if ( n >= 0){
	    for( int i = 1; i <=n ; ++i){

	        result += signo * (1.0 / i);
	        signo *= -1;
	      
	    } cout <<result<<endl;

    }else{
      return ;
    }

}

void exercise_8(string s) {

    string s2;
    char iteracion; 
    string palindromo; 
    if (s == " "){
        cout<<"YES"<<endl;
        
    }else{
        
        for ( int i = 0; i < s.size(); ++i ){
            iteracion = s[i];
            if (iteracion == ' '){
                continue;
            }else {
                s2 += s[i];
            }
        }
    
    for (int j = s2.size() - 1; j >= 0 ; --j ){
        palindromo += s2[j];
        }
        
        if (palindromo == s2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}

void exercise_9(string s) {

	int fwords = 0;
  
	  for(int i = 0 ; i <= s.size(); ++i){
	     if(s[i] =='f' || s[i]== 'F'){
	          fwords++;
	          if (fwords == 2){
	           cout<<i<<endl;
	          }
	       }
	
	   } 
	   
	   if (fwords == 1){
	       cout<<"-1"<<endl; 
	   }else if (fwords == 0){ 
	       cout <<"-2"<<endl;
	}
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