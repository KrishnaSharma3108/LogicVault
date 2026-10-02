#include<stdio.h>
struct MP{
    int MP_RANK;
    char MP_NAME[50],speaker[30],rulling_party[30],opposition_party[20];
};
int main()
{
    struct MP p,pread;
    FILE *MPP;
    MPP=fopen("PARILIMENT_HOUSE","w");
    if(MPP==NULL)
    {
        printf("error oppeninf file for writing\n");
        return 1;
    }
    printf("ENTER THE NAME OF THE SPEAKER: ");
    scanf("%s",p.speaker);
    printf("ENTER THE RANK OF THE MP: \n");
    scanf("%d",&p.MP_RANK);
    printf("ENTER THE NAME OF THE MP: \n");
    scanf("%s",p.MP_NAME);
    printf("ENTER THE NAME OF THE RULLING PARTY: \n ");
    scanf("%s",p.rulling_party);
    printf("ENTER THE NAME OF THE OPPOSITION PARTY: \n");
    scanf("%s",p.opposition_party);
    fprintf(MPP,"%s %d %s %s %s",p.speaker,p.MP_RANK,p.MP_NAME,p.rulling_party,p.opposition_party);
    fclose(MPP);
    MPP=fopen("PARILIMENT_HOUSE","r");
    if(MPP==NULL)
    {
        printf("error opening file for reading\n ");
        return 1;
    }
     fscanf(MPP,"%s %d %s %s %s",pread.speaker,&pread.MP_RANK,pread.MP_NAME,pread.rulling_party,pread.opposition_party);
     fclose(MPP);
     printf("\n DATA READ FROM FILE\n ");
     printf("SPEAKER OF THE PARILMENT: %s \n ",pread.speaker);
     printf("RANK OF THE MP: %d\n ",pread.MP_RANK);
     printf("NAME OF THE MP: %s\n ",pread.MP_NAME);
     printf("NAME OF THE RULLING PARTY: %s\n",pread.rulling_party);
     printf("NAME OF THE OPPOSITION PARTY: %s\n",pread.opposition_party);
    return 0;
}
