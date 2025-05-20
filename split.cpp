#include&lt;iostream&gt;
#include&lt;sstream&gt;
#include&lt;vector&gt;
#include&lt;string&gt;

int main() {
    // 示例字符串
    std::string text = "    Hello World this is a test string.";

    // 创建一个字符串流对象
    std::istringstream iss(text);

    // 存储分离出的单词
    std::vector&lt;std::string&gt; words;

    // 从字符串流中读取单词
    std::string word;
    while (iss &gt;&gt; word) {
        words.push_back(word);
    }

    // 输出分离出的单词
    for (const auto&amp; w : words) {
        std::cout &lt;&lt; w &lt;&lt; std::endl;
    }

    return 0;
}