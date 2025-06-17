float sommeparobjet(struct facture tabf[N]){
int i;
float si=0;
float ss=0;
for(i=0;i<N;i++){
    if(strcmp(tab[N].objet,"inscription")==0){
        si=ss+tabf[i].montant;
    }
}
    printf("\n le montant total des inscriptions est :%.2f",si);
    printf("\n le montant total des scolaires est :%.2f",ss);
    return si,ss;
}
