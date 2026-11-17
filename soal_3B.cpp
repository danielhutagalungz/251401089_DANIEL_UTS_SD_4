#include <iostream>
using namespace std;

struct Node {
    int antrian;
    Node* next;
};

int main() {
    int n, pelanggan;
    system ("cls");
    Node* front = nullptr;
    Node* rear = nullptr;

    cout << "Berapa jumlah antrian : ";
    cin >> n;

    cout << endl;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan pelanggan ke-" << i << " : ";
        cin >> pelanggan;

        Node* nodeBaru = new Node();
        nodeBaru->antrian = pelanggan;
        nodeBaru->next = nullptr;

        if (front == nullptr) {
            front = nodeBaru;
            rear = nodeBaru;
        }
        else {
            rear->next = nodeBaru;
            rear = nodeBaru;
        }
    }


    // Tampilkan struct
    Node* temp = front;
    cout << "Isi queue : ";

    while (temp != nullptr) {
        cout << temp->antrian << " ";
        temp = temp->next;
    }

    cout << endl;

    // Front
    cout << "Front : " << front->antrian << endl;

    // Empty
    if (front == nullptr) {
        cout << "Queue Kosong" << endl;
    } else {
        cout << "Queue Tidak Kosong" << endl;
    }

    // Dequeue
    Node* hapus = front;
    cout << "Dequeue : " << front->antrian << endl;
    front = front->next;
    delete hapus;

    // Tampilkan setelah dequeue
    temp = front;
    cout << "Isi queue setelah di dequeue : ";

    while (temp != nullptr) {
        cout << temp->antrian << " ";
        temp = temp->next;
    }
}