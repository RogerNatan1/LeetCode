bool isPalindrome(int x) {
    int original = x; // guarda o valor original

    // se o numero for negativo
    if(x < 0){
        return false;
    }
    // variaveis para a detecção do número válido
    long long int numInvertido = 0;
    int resto;
    // loop para inverter o número
    while(x != 0){
    resto = x % 10;
    numInvertido = numInvertido * 10 + resto;
    x = x / 10;
    }
    // comparação para saber se é verdadeiro ou falso
    if(numInvertido == original){
        return true;
    } 
    else{
        return false;
    }
}
