#include <stdio.h>
#include <stdlib.h>

// kateyuinomenos grafos






// Καθορίστε τον μέγιστο αριθμό κορυφών-κομβων στο γράφημα
#define N 6

// Δομή δεδομένων για την αποθήκευση ενός αντικειμένου γραφήματος
struct Graph
{
    // Μια συστοιχία δεικτών προς τον κόμβο για την αναπαράσταση μιας λίστας γειτνίασης
    struct Node* head[N];
};

// Δομή δεδομένων για την αποθήκευση κόμβων λίστας γειτνίασης του γραφήματος
struct Node
{
    int dest, weight;
    struct Node* next;
};

// Δομή δεδομένων για αποθήκευση ακμής γραφήματος
struct Edge {
    int src, dest, weight;
};

// Λειτουργία δημιουργίας λίστας γειτνίασης από καθορισμένες άκρες
struct Graph* createGraph(struct Edge edges[], int n)
{
    // εκχωρήστε χώρο αποθήκευσης για τη δομή δεδομένων γραφήματος
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));

    // αρχικοποίηση δείκτη κεφαλής για όλες τις κορυφές
    for (int i = 0; i < N; i++) {
        graph->head[i] = NULL;
    }

    //προσθέστε ακμές στο κατευθυνόμενο γράφημα μία προς μία
    for (int i = 0; i < n; i++)
    {
       // λάβετε την κορυφή της πηγής και του προορισμού
        int src = edges[i].src;
        int dest = edges[i].dest;
        int weight = edges[i].weight;

        // εκχωρήστε έναν νέο κόμβο λίστας γειτνίασης από το src στο dest
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->dest = dest;
        newNode->weight = weight;

        // τοποθετήστε τον νέο κόμβο στην τρέχουσα κεφαλή
        newNode->next = graph->head[src];

        // σημείο δείκτη κεφαλής στον νέο κόμβο
        graph->head[src] = newNode;
    }

    return graph;
}


void printGraph(struct Graph* graph)
{
    for (int i = 0; i < N; i++)
    {
        // εκτυπώστε την τρέχουσα κορυφή και όλους τους γείτονές της
        struct Node* ptr = graph->head[i];
        while (ptr != NULL)
        {
            printf("%d —> %d (%d)\t", i, ptr->dest, ptr->weight);
            ptr = ptr->next;
        }

        printf("\n");
    }
}


int main(void)
{
    // πίνακας εισόδου που περιέχει άκρες του γραφήματος (σύμφωνα με το παραπάνω διάγραμμα)
    // (x, y, w) η πλειάδα αντιπροσωπεύει μια ακμή από το x έως το y με βάρος «w».
    struct Edge edges[] =
    {
        {0, 1, 6}, {1, 2, 7}, {2, 0, 5}, {2, 1, 4}, {3, 2, 10}, {4, 5, 1}, {5, 4, 3}
    };

    // Υπολογίστε τον συνολικό αριθμό των ακμών
    int n = sizeof(edges)/sizeof(edges[0]);

    // Κατασκευάστε ένα γράφημα από τις δοσμένες ακμές
    struct Graph *graph = createGraph(edges, n);

   // Λειτουργία για την εκτύπωση της αναπαράστασης λίστας γειτνίασης ενός γραφήματος
    printGraph(graph);

    return 0;
}
