import XCTest
import SwiftTreeSitter
import TreeSitterJanet

final class TreeSitterJanetTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_janet())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Janet grammar")
    }
}
