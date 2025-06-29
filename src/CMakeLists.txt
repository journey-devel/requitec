# SPDX-FileCopyrightText: 2025 Daniel Aimé Valcour <fosssweeper@gmail.com>
#
# SPDX-License-Identifier: MIT

target_sources(
    requite
    PRIVATE
        main.cpp
)

target_sources(
    librequite
    PRIVATE
        alias.cpp
        anonymous_function.cpp
        anonymous_object.cpp
        anonymous_property.cpp
        attribute_flags.cpp
        build.cpp
        builder.cpp
        const_expression_iterator.cpp
        containing_scope_iterator.cpp
        context.cpp
        contextualize.cpp
        escape_sequences.cpp
        evaluate_values.cpp
        export_table.cpp
        expression_iterator.cpp
        expression_make.cpp
        expression.cpp
        file.cpp
        get_module.cpp
        label.cpp
        llvm_target.cpp
        llvm_module.cpp
        log.cpp
        lookup_symbols.cpp
        make_symbols.cpp
        module.cpp
        named_procedure_group.cpp
        node.cpp
        object.cpp
        opcode.cpp
        options.cpp
        ordered_variable.cpp
        parse_ast.cpp
        precedence_parser.cpp
        procedure_iterator.cpp
        procedure.cpp
        prototype.cpp
        resolve_symbols.cpp
        root_symbol.cpp
        run.cpp
        signature_parameter.cpp
        signature.cpp
        scope.cpp
        situate_ast.cpp
        source_name.cpp
        source_ranger.cpp
        sub_symbol.cpp
        symbol.cpp
        table.cpp
        tabulate.cpp
        tasks.cpp
        token.cpp
        tokenize_tokens.cpp
        tuple.cpp
        unordered_variable.cpp
        write_assembly.cpp
        validate_source.cpp
        write_ast.cpp
        write_llvm_ir.cpp
        write_object.cpp
        write_tokens.cpp
        write_user_symbols.cpp
)