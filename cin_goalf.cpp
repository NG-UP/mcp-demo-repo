#include &lt;iostream&gt;

int in_goals(double arr[] int n);
void show_goals(double arr[] int n);
void average(double arr[] int n);
int main(){
    double arr[10];
    int n=0;
    n=in_goals(arr 10);
    show_goals(arr n);
    average(arr n);
    return 0;
}

int in_goals(double arr[] int n){
    std::cout &lt;&lt;"输入10个成绩(输入非数值提前结束输入)："&lt;&lt; std::endl;
    int count=0;
    for(int i=0;i&lt;n;i++){
        double tmp;
        if (std::cin&gt;&gt;tmp){
            arr[i]=tmp;
            count++;
        }else{
            break;
        }
    }
    std::cout &lt;&lt; "输入有效成绩："&lt;&lt;count&lt;&lt;"个，输入完成！" &lt;&lt; std::endl;
    return count;
}
void show_goals(double arr[] int n){
    std::cout &lt;&lt; "成绩分别为：";
    for(int i=0;i&lt;n;i++){
        std::cout &lt;&lt; arr[i] &lt;&lt; " ";
    }
    std::cout &lt;&lt; std::endl;
}
void average(double arr[] int n){
    double sum=0;
    for(int i=0;i&lt;n;i++){
        sum+=arr[i];
    }
    std::cout &lt;&lt; "平均成绩为：" &lt;&lt; sum/n &lt;&lt; std::endl;
}