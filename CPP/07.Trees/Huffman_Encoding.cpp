#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

// Node structure for Huffman Tree
struct Node {
    char ch;
    int freq;
    Node *left, *right;

    Node(char c, int f) {
        ch = c;
        freq = f;
        left = right = nullptr;
    }
};

// Comparison object for min-heap
struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq; // min-heap based on frequency
    }
};

// Traverse the Huffman Tree and store codes
void generateCodes(Node* root, string code, unordered_map<char, string>& huffmanCode) {
    if (!root) return;

    // Leaf node
    if (!root->left && !root->right)
        huffmanCode[root->ch] = code;

    generateCodes(root->left, code + "0", huffmanCode);
    generateCodes(root->right, code + "1", huffmanCode);
}

// Main Huffman Encoding function
void huffmanEncoding(string text) {
    unordered_map<char, int> freq;
    for (char ch : text)
        freq[ch]++;

    // Create a priority queue (min-heap)
    priority_queue<Node*, vector<Node*>, Compare> pq;

    for (auto pair : freq)
        pq.push(new Node(pair.first, pair.second));

    // Build Huffman Tree
    while (pq.size() > 1) {
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();

        Node* newNode = new Node('\0', left->freq + right->freq);
        newNode->left = left;
        newNode->right = right;
        pq.push(newNode);
    }

    // Root of the Huffman Tree
    Node* root = pq.top();

    // Generate Huffman Codes
    unordered_map<char, string> huffmanCode;
    generateCodes(root, "", huffmanCode);

    cout << "\nHuffman Codes:\n";
    for (auto pair : huffmanCode)
        cout << pair.first << " : " << pair.second << endl;

    cout << "\nOriginal text:\n" << text << endl;

    cout << "\nEncoded text:\n";
    string encoded = "";
    for (char ch : text)
        encoded += huffmanCode[ch];
    cout << encoded << endl;
}

int main() {
    string text;
    cout << "Enter text to encode: ";
    getline(cin, text);

    huffmanEncoding(text);
    return 0;
}
