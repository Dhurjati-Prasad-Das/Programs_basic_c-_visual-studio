#include <iostream>
using namespace std;
class INavigation{
    public:
        virtual void MoveToRight()=0;
        virtual void MoveToLeft()=0;
};
class Carplay:public INavigation{
    public:
        void MoveToRight(){
            cout<<"\n Carplay -> Right \n";
        }
        void MoveToLeft(){
            cout<<"\n Carplay -> Left";
        }
};
class AndroidAuto:public INavigation{
    public:
        void MoveToRight(){
            cout<<"\n AndroidAuto -> Right \n";
        }
        void MoveToLeft(){
            cout<<"\n AndroidAuto -> Left";
        }
};
int main(){
    Carplay carplay;
    AndroidAuto android;
    carplay.MoveToLeft();
    android.MoveToLeft();
    return 0;
}