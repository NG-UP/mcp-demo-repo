#include &lt;iostream&gt;
#include &lt;string&gt;

using namespace std;
const int SIZE = 5;
void display(const string st[] int n);

int main(){
    string list[SIZE];
    cout &lt;&lt; "Enter 5 names: " &lt;&lt; endl;
    for (int i = 0; i &lt; SIZE; i++){
        cout &lt;&lt; "Name " &lt;&lt; i + 1 &lt;&lt; ": ";
        getline(cin list[i]);
    }
    cout &lt;&lt;"Your list:\n";
    display(list SIZE);
    return 0;
}

void display(const string st[] int n){
    for (int i = 0; i &lt; n; i++){
        cout &lt;&lt; i + 1 &lt;&lt; ": " &lt;&lt; st[i] &lt;&lt; endl;
    }
}