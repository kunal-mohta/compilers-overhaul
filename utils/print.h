/*
Group- 35
2017A7PS0082P		Laksh Singla
2017A7PS0148P 		Kunal Mohta
2017A7PS0191P 		Suyash Raj
2017A7PS0302P 		Shubham Saxena
*/

#include "../data_structs/grammar.h"
#include "../lang_specs/entities.h"
#include "../utils/nonterminal_name.h"
#include "../utils/terminal_name.h"
#include "../data_structs/parse_table.h"
#include "../data_structs/tree.h"
#include "../data_structs/stack.h"
#include "../ast/generate_ast.h"

#ifndef PRINT_H
#define PRINT_H

void print_first(gm_first *fi);

void print_follow(gm_follow *fo);

void print_grammar(grammar *gm);

void print_parse_table(parse_table *pt);

void print_parse_tree(tree *pt);

void print_parse_stack(stack *s);

void print_ast_tree(tree *ast);

void print_rule(gm_rule *rule);

void calc_mem_ast (tree *t, int *total_mem, int *num_nodes);

void calc_mem_parse_tree (tree *t, int *total_mem, int *num_nodes);

#endif
