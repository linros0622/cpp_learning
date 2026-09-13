#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. 话题名拼接
    string base_topic = "/camera";
    string sub_topic = "/image_raw";
    string full_topic = base_topic + sub_topic;  // "/camera/image_raw"
    cout << "话题: " << full_topic << endl;

    // 2. 提取最后一段
    size_t pos = full_topic.find_last_of('/');
    string last_part = full_topic.substr(pos + 1);  // "image_raw"
    cout << "最后一段: " << last_part << endl;

    // 3. 拼接数字（节点命名）
    int id = 3;
    string node_name = "camera_node_" + to_string(id);  // "camera_node_3"
    cout << "节点名: " << node_name << endl;

    // 4. 检查是否包含关键字
    if (full_topic.find("camera") != string::npos) {
        cout << "这是相机话题" << endl;
    }

    // 5. 遍历输出每个字符
    cout << "字符: ";
    for (char c : full_topic) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}