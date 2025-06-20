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
        build_user_symbols.cpp
        compile_object_files.cpp
        const_expression_iterator.cpp
        containing_scope_iterator.cpp
        context.cpp
        escape_sequences.cpp
        evaluate_values.cpp
        expression_iterator.cpp
        expression_make.cpp
        expression.cpp
        file.cpp
        filesystem.cpp
        get_module.cpp
        label.cpp
        llvm_target.cpp
        llvm_module.cpp
        log.cpp
        lookup_symbols.cpp
        module_symbols.cpp
        module.cpp
        named_procedure_group.cpp
        node.cpp
        object.cpp
        opcode.cpp
        options.cpp
        ordered_variable.cpp
        parse_ast.cpp
        precedence_parser.cpp
        procedure.cpp
        prototype_user_symbols.cpp
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
        symbol_path.cpp
        symbol.cpp
        table.cpp
        tabulate_user_symbols.cpp
        tasks.cpp
        token_csv.cpp
        token.cpp
        tokenize_tokens.cpp
        tuple.cpp
        unordered_variable.cpp
        validate_source.cpp
        write_ast.cpp
        write_llvm_ir.cpp
)