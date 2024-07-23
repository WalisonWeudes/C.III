int somar_numeros(int x){

    if(x == 0){
        return 0;
    }else{
        return  x % 10 + somar_numeros(x/10);
    }
}

int main(){

    int x = 2222;
    int resultado = somar_numeros(x);
    printf("Resultado: %d\n", resultado);
    return 0;


}