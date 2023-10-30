#include <stdio.h>
#include <stdlib.h>

// Μια δομή για την αναπαράσταση ενός κόμβου λίστας γειτνίασης
struct AdjListNode {
	int dest;
	struct AdjListNode* next;
};

// Μια δομή για την αναπαράσταση μιας λίστας γειτνίασης
struct AdjList {
	struct AdjListNode* head;
};

// Μια δομή για την αναπαράσταση ενός γραφήματος. Ένα γράφημα
// είναι ένας πίνακας λιστών γειτνίασης.
// Το μέγεθος του πίνακα θα είναι V (αριθμός κορυφών
// σε γράφημα)

struct Graph {
	int V;
	struct AdjList* array;
};

// Μια βοηθητική συνάρτηση για τη δημιουργία ενός νέου κόμβου λίστας γειτνίασης
struct AdjListNode* newAdjListNode(int dest)
{
	struct AdjListNode* newNode
		= (struct AdjListNode*)malloc(
			sizeof(struct AdjListNode));
	newNode->dest = dest;
	newNode->next = NULL;
	return newNode;
}

// Μια βοηθητική συνάρτηση που δημιουργεί ένα γράφημα V κορυφών
struct Graph* createGraph(int V)
{
	struct Graph* graph
		= (struct Graph*)malloc(sizeof(struct Graph));
	graph->V = V;

// Δημιουργία μιας σειράς λιστών γειτνίασης. Μέγεθος του
// ο πίνακας θα είναι V
	graph->array = (struct AdjList*)malloc(
		V * sizeof(struct AdjList));

// Αρχικοποίηση κάθε λίστας γειτνίασης ως κενή κατά
// κάνοντας το κεφάλι ως NULL
	int i;
	for (i = 0; i < V; ++i)
		graph->array[i].head = NULL;

	return graph;
}

// Προσθέτει μια ακμή σε ένα μη κατευθυνόμενο γράφημα
void addEdge(struct Graph* graph, int src, int dest)
{
	// Προσθήκη ακμής από το src στο dest. Ένας νέος κόμβος είναι
// προστέθηκε στη λίστα γειτνίασης του src. Ο κόμβος
// προστίθεται στην αρχή
	struct AdjListNode* check = NULL;
	struct AdjListNode* newNode = newAdjListNode(dest);

	if (graph->array[src].head == NULL) {
		newNode->next = graph->array[src].head;
		graph->array[src].head = newNode;
	}
	else {

		check = graph->array[src].head;
		while (check->next != NULL) {
			check = check->next;
		}
		// graph->array[src].head = newNode;
		check->next = newNode;
	}

	// Εφόσον το γράφημα δεν είναι κατευθυνόμενο, προσθέστε μια ακμή από
// dest σε src επίσης
	newNode = newAdjListNode(src);
	if (graph->array[dest].head == NULL) {
		newNode->next = graph->array[dest].head;
		graph->array[dest].head = newNode;
	}
	else {
		check = graph->array[dest].head;
		while (check->next != NULL) {
			check = check->next;
		}
		check->next = newNode;
	}

	// newNode = newAdjListNode(src);
	// newNode->next = graph->array[dest].head;
	// graph->array[dest].head = newNode;
}

// Μια βοηθητική συνάρτηση για την εκτύπωση της λίστας γειτνίασης
// αναπαράσταση γραφήματος
void printGraph(struct Graph* graph)
{
	int v;
	for (v = 0; v < graph->V; ++v) {
		struct AdjListNode* pCrawl = graph->array[v].head;
		printf("\n Adjacency list of vertex %d\n head ", v);
		while (pCrawl) {
			printf("-> %d", pCrawl->dest);
			pCrawl = pCrawl->next;
		}
		printf("\n");
	}
}

// Πρόγραμμα οδήγησης για τον έλεγχο των παραπάνω συναρτήσεων
int main()
{

	int V = 5;
	struct Graph* graph = createGraph(V);
	addEdge(graph, 0, 1);
	addEdge(graph, 0, 4);
	addEdge(graph, 1, 2);
	addEdge(graph, 1, 3);
	addEdge(graph, 1, 4);
	addEdge(graph, 2, 3);
	addEdge(graph, 3, 4);

	// εκτυπώστε την αναπαράσταση της λίστας γειτνίασης των παραπάνω
    // γράφημα
	printGraph(graph);

	return 0;
}
