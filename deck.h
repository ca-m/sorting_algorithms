#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e -enumeration of card suits
 * @SPADE: spades suit
 * @HEART: hearts suit
 * @CLUB: clubs suit
 * @DIAMOND: diamonds suit
 */

typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - playing card
 * @value: value of the card, Ace to King
 * @kind:kind of card
 */

typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - deck of card
 * @card:pointer to card of node
 * @prev: pointer to previous node of list
 * @next: pointer to next node of list
 */

typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif/*DECK_H*/
