void factureparetudiant(struct facture tabf[N]){
    int i;
    char id[20];
    int t=0;
    printf("\n veuillez saisir l`id de l`etudiant:");
    scanf ("%s",id);
    for(i =0;i<N;i++){
        if(strcmp(id,tabf[i].idetudiant)==0){
            printf("facture :%d %,2f %s\n",tabf[i].montant,tabf[i].objet);
            t=1;
        }
    }
    if(!t){
        printf("cet etudiant n'a pas de facture.\n");
    }
}