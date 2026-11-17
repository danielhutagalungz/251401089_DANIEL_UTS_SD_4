#include <iostream>
using namespace std;

struct Node {
    int nilai;
    Node* next;
};


int main() {
    system ("cls");
    int n, nilai, nilaiDepan, nilaiBelakang, nilaiTengah;

    cout << "Berapa jumlah data : ";
    cin >> n;

    cout << endl;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan nilai ke-" << i << " : ";
        cin >> nilai;

        Node* nodeBaru = new Node();
        nodeBaru->nilai = nilai;
        nodeBaru->next = nullptr;

        if (head == nullptr) {
            head = nodeBaru;
            tail = nodeBaru;
        }
        else {
            tail->next = nodeBaru;
            tail = nodeBaru;
        }
    }

    cout << endl;
    
    // Tampilkan Linked List
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->nilai << " ";
        temp = temp->next;
    }

    // Menghapus node paling belakang
    temp = head;

    while (temp->next != tail) {
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = nullptr;

    cout << "Setelah hapus node paling belakang : ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->nilai << " ";
        temp = temp->next;
    }

    cout << endl;

    // Menghapus node paling depan
    temp = head;
    head = head->next;
    delete temp;

    cout << "Setelah hapus node paling depan : ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->nilai << " ";
        temp = temp->next;
    }

    cout << endl;

}