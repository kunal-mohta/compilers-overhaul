/*
Group- 35
2017A7PS0082P		Laksh Singla
2017A7PS0148P 		Kunal Mohta
2017A7PS0191P 		Suyash Raj
2017A7PS0302P 		Shubham Saxena
*/

#include "../data_structs/tree.h"
#include "../data_structs/linked_list.h"
#include "../lang_specs/entities.h"
#include "../data_structs/grammar.h"
#include "../utils/nonterminal_name.h"
#include "../symbol_table/symbol_table_def.h"

void print_ast_subtree(tree_node *, int, char *);

#ifndef GENERATE_AST_H
#define GENERATE_AST_H

typedef struct ____AST_NODE____ ast_node;

struct ____AST_NODE____
{
    bool is_leaf;
    gm_unit label; // grammar symbol related info
    linked_list *ll;
    id_type type;
    code *c;
};

typedef struct ____AST_LEAF____ ast_leaf;

struct ____AST_LEAF____
{
    bool is_leaf;
    gm_unit label; // grammar symbol related info
    lexical_token *ltk;
    id_type type;
    code *c;
};

tree *generate_ast(tree *pt);

#endif
