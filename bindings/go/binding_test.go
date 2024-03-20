package tree_sitter_mavka_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-mavka"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mavka.Language())
	if language == nil {
		t.Errorf("Error loading Mavka grammar")
	}
}
