// kateyuinomenos grafos
#include <stdio.h>
#include <stdlib.h>



// Καθορίστε τον μέγιστο αριθμό κορυφών στο γράφημα
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
    int dest;
    struct Node* next;
};

// Δομή δεδομένων για αποθήκευση ακμής γραφήματος
struct Edge {
    int src, dest;
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

   // προσθέστε ακμές στο κατευθυνόμενο γράφημα μία προς μία
    for (int i = 0; i < n; i++)
    {
        // λάβετε την κορυφή της πηγής και του προορισμού
        int src = edges[i].src;
        int dest = edges[i].dest;

        // εκχωρήστε έναν νέο κόμβο λίστας γειτνίασης από το src στο dest
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->dest = dest;

       // δείχνει νέο κόμβο στην τρέχουσα κεφαλή
        newNode->next = graph->head[src];

        // τοποθετήστε τον δείκτη κεφαλής στον νέο κόμβο
        graph->head[src] = newNode;
    }

    return graph;
}

// Λειτουργία για την εκτύπωση της αναπαράστασης λίστας γειτνίασης ενός γραφήματος
void printGraph(struct Graph* graph)
{
    for (int i = 0; i < N; i++)
    {
        // εκτυπώστε την τρέχουσα κορυφή και όλους τους γείτονές της
        struct Node* ptr = graph->head[i];
        while (ptr != NULL)
        {
            printf("(%d —> %d)\t", i, ptr->dest);
            ptr = ptr->next;
        }

        printf("\n");
    }
}

// Κατευθυνόμενη υλοποίηση γραφήματος στο C
int main(void)
{
    // πίνακας εισόδου που περιέχει άκρες του γραφήματος (σύμφωνα με το παραπάνω διάγραμμα)
    // (x, y) ζεύγος στον πίνακα αντιπροσωπεύει μια ακμή από το x στο y
    struct Edge edges[] =
    {
        {0, 1}, {1, 2}, {2, 0}, {2, 1}, {3, 2}, {4, 5}, {5, 4}
    };

  // Υπολογίστε τον συνολικό αριθμό των ακμών
    int n = sizeof(edges)/sizeof(edges[0]);

   // Κατασκευάστε ένα γράφημα από τις δοσμένες ακμές
    struct Graph *graph = createGraph(edges, n);

    // Λειτουργία για την εκτύπωση της αναπαράστασης λίστας γειτνίασης ενός γραφήματος
    printGraph(graph);

    return 0;
}
