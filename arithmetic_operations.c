#include "monty.h"

void add_opcode(stack_t **stack, unsigned int line_number) {
    int value;

    if (get_list_length(*stack) < 2) {
        two_elements_error(line_number);
    }

    value = (*stack)->n;
    delete_first_node(stack);
    (*stack)->n += value;
}

void sub_opcode(stack_t **stack, unsigned int line_number) {
    int value;

    if (get_list_length(*stack) < 2) {
        two_elements_error(line_number);
    }

    value = (*stack)->n;
    delete_first_node(stack);
    (*stack)->n -= value;
}

void div_opcode(stack_t **stack, unsigned int line_number) {
    int value;

    if (get_list_length(*stack) < 2) {
        two_elements_error(line_number);
    }
    if ((*stack)->n == 0) {
        division_by_zero(line_number);
    }

    value = (*stack)->n;
    delete_first_node(stack);
    (*stack)->n /= value;
}

void mul_opcode(stack_t **stack, unsigned int line_number) {
    int value;

    if (get_list_length(*stack) < 2) {
        two_elements_error(line_number);
    }

    value = (*stack)->n;
    delete_first_node(stack);
    (*stack)->n *= value;
}

void mod_opcode(stack_t **stack, unsigned int line_number) {
    int value;

    if (get_list_length(*stack) < 2) {
        two_elements_error(line_number);
    }

    if ((*stack)->n == 0) {
        division_by_zero(line_number);
    }

    value = (*stack)->n;
    delete_first_node(stack);
    (*stack)->n %= value;
}

