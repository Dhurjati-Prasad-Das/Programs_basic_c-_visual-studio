#include<cstdio>
#include<cstdlib>
using namespace std;
//FILENAME===/Users/dhurjatidas/Desktop/JUST_SAMPLE.rtf
class file{
    private:
    FILE *fp;
    public:
    file(const char *name,const char *mode){
        fp=fopen(name,mode);
        if(fp==NULL){
            printf("\nCannot open file:%s\n",name);
            exit(1);
        }
    }
    ~file(){
        fclose(fp);
    }
    FILE *getfilepointer(){
        return fp;
    }
};
int main(){
    char filename[129],ch;
    printf("\n Enter the file name =");
    scanf("%s",filename);
    file f(filename,"r");
    while((ch=fgetc(f.getfilepointer()))!=EOF){
        printf("%c",ch);
    }
    return 0;
}