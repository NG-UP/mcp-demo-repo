#include &lt;iostream&gt;

const int Len=66;
const int divs =5;
void subdivide(char ar[] int low int high int level);

int main(){
    char ruler[Len];
    for (int i=1; i&lt;Len-2; i++)
        ruler[i]=' ';
    ruler[Len-1]='\0';
    int min=0;
    int max=Len-2;
    ruler[min]=ruler[max]='|';
    std::cout &lt;&lt; ruler &lt;&lt; std::endl;
    for(int i=1;i&lt;=divs;i++){
        subdivide(rulerminmaxi);
        std::cout&lt;&lt;ruler&lt;&lt;std::endl;
        for(int j=1;j&lt;Len-2;j++){
            ruler[j]=' ';
        }
    }

    return 0;
}

void subdivide(char ar[] int low int high int level){
    if (level==0)
        return;
    int mid=(low+high)/2;
    ar[mid]='|';
    subdivide(arlowmidlevel-1);
    subdivide(armidhighlevel-1);
}