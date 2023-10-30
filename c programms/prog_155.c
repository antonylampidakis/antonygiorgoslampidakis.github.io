#include <stdio.h>
#include <stdlib.h>
 //
// Ορισμός για τον μέγιστο αριθμό κορυφών στο γράφημα - του γραφου
#define N 6

// Δομή δεδομένων για την αποθήκευση ενός αντικειμένου / oblect - γραφου
struct Graph
{
    // Μια συστοιχία δεικτών προς τον κόμβο για την αναπαράσταση μιας λίστας γειτνίασης
    struct Node* head[N];
};

// Δομή δεδομένων για την αποθήκευση των κόμβων της λίστας γειτνίασης του γραφου
struct Node
{
    int dest, weight;
    struct Node* next;
};

// Δομή δεδομένων για αποθήκευση ακμής του γραφου
struct Edge {
    int src, dest, weight;
};

// Λειτουργία δημιουργίας λίστας γειτνίασης από καθορισμένες άκρες
struct Graph* createGraph(struct Edge edges[], int n)
{
    // δυναμικη παραχώρηση μνημης για την  αποθήκευση της δομή δεδομένων - γραφου
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));

    // αρχικοποίηση δείκτη κεφαλής για όλες τις κορυφές
    for (int i = 0; i < N; i++) {
        graph->head[i] = NULL;
    }

    // προσθέστε ακμές στο κατευθυνόμενο γράφημα μία προς μία
    for (int i = 0; i < n; i++)
    {
        // λάβετε την κορυφή της εκκινησης και του προορισμού
        int src = edges[i].src;
        int dest = edges[i].dest;
        int weight = edges[i].weight;

        // εκχωρήστε έναν νέο κόμβο λίστας γειτνίασης από το src στο dest, δεσμευοντας μνημη δυναμικα
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->dest = dest;
        newNode->weight = weight;

        // τοποθετήστε τον νέο κόμβο στην τρέχουσα κεφαλή
        newNode->next = graph->head[src];

        // τοποθετηση του δείκτη κεφαλής στον νέο κόμβο
        graph->head[src] = newNode;
    }

    return graph;
}

// Λειτουργία για την εκτύπωση και αναπαράσταση της  λίστας γειτνίασης ενός γράφου
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

//15/06/2023//!!!!!!!!!!!!!!!!!!!!!Weighted Directed Graph!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//
int main(void)
{


	//πίνακας εισόδου που περιέχει τις άκμες του γραφου (σύμφωνα με το παραπάνω διάγραμμα)
    // (x, y, w) <- η πλειάδα αντιπροσωπεύει μια ακμή από το x έως το y με βάρος «w».
    struct Edge edges[] =
    {
        {0, 1, 6}, {1, 2, 7}, {2, 0, 5}, {2, 1, 4}, {3, 2, 10}, {4, 5, 1}, {5, 4, 3}
    };

    // υπολογίστε τον συνολικό αριθμό των ακμων
    int n = sizeof(edges)/sizeof(edges[0]);

    // δημιουργια μιας γραφικής παράστασης από τις δοσμένες ακμές
    struct Graph *graph = createGraph(edges, n);

    // εκτύπωση της αναπαράστασης λίστας γειτνίασης ενός γραφου
    printGraph(graph);

    return 0;
}
