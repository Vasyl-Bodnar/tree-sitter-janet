package tree_sitter_janet_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_janet "github.com/tree-sitter/tree-sitter-janet/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_janet.Language())
	if language == nil {
		t.Errorf("Error loading Janet grammar")
	}
}
