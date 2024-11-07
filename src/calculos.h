int somaArray(int n[], int qtd){
    int rs = 0;
    int ps;
    //ou ps <= dtd -1//
    for(ps = 0; ps < qtd ; ps++){
        rs += n[ps];
    }
    return rs;
}

