int somaArray(int n[], int qtd){
    int rs = 0;
    int ps;
    //ou ps <= dtd -1//
    for(ps = 0; ps < qtd ; ps++){
        rs += n[ps];
    }
    return rs;
}

int mediaArray(int n[], int qtd){
    int rs = 0;
    int ps;
    //ou ps <= dtd -1//
    for(ps = 0; ps < qtd ; ps++){
        rs += n[ps];
    }
    return rs/qtd;
}

int maiorvalor(int n[], int qtd){
    int m = n[0];
    int i;
    for(i = 1 ; i < qtd ; i++);
    if (n[i]>m) {
        m = n[i];
    }
    return m;
}
