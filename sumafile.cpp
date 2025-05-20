#include &lt;iostream&gt;
#include &lt;fstream&gt;
#include &lt;cstdlib&gt;
#include &lt;cctype&gt;
const int SIZE = 60;
int main(){
    using namespace std;
    char filename[SIZE];
    ifstream inFile;
    ofstream outFile;
    cout &lt;&lt; "Enter name of data file: ";

    cin.getline(filename SIZE);
    inFile.open(filename); // associate inFile with a file
    if (!inFile.is_open()) // failed to open file
    {
        cout &lt;&lt; "Could not open the file " &lt;&lt; filename &lt;&lt; endl;
        cout &lt;&lt; "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    double value;
    double sum = 0.0;
    int count = 0; // number of items read

    inFile &gt;&gt; value; // get first value
    while (inFile.good()) // while input good and not at EOF
    {
        ++count; // one more item read
        sum += value; // calculate running total
        inFile &gt;&gt; value; // get next value
    }

    if (inFile.eof())
        cout &lt;&lt; "End of file reached.\n";
    else if (inFile.fail())
        cout &lt;&lt; "Input terminated by data mismatch.\n";
    else
        cout &lt;&lt; "Input terminated for unknown reason.\n";

    if (count == 0)
        cout &lt;&lt; "No data processed.\n";
    else
    {
        cout &lt;&lt; "Items read: " &lt;&lt; count &lt;&lt; endl;
        cout &lt;&lt; "Sum: " &lt;&lt; sum &lt;&lt; endl;
        cout &lt;&lt; "Average: " &lt;&lt; sum / count &lt;&lt; endl;
    }

    inFile.close(); // finished with the file
    return 0;
}