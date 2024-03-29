#include "if1.h"
::literal lex_factor::Literal() { static int a[] = {1, 0, 0}; return ::literal( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_expr lex_factor::Expr() { static int a[] = {1, 1, 1}; return ::lex_expr( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::literal lex_factor::Low() { static int a[] = {1, 2, 0}; return ::literal( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::literal lex_factor::High() { static int a[] = {1, 2, 2}; return ::literal( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::id lex_factor::Id() { static int a[] = {1, 3, 0}; return ::id( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_factor_neg lex_factor_neg::FactorNeg() { static int a[] = {1, 0, 1}; return ::lex_factor_neg( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_factor lex_factor_neg::Factor() { static int a[] = {1, 1, 0}; return ::lex_factor( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_factor_rep lex_factor_rep::FactorRep() { static int a[] = {2, 0, 0, 1, 0}; return ::lex_factor_rep( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::STAR lex_factor_rep::Star() { static int a[] = {1, 0, 1}; return ::STAR( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::PLUS lex_factor_rep::Plus() { static int a[] = {1, 1, 1}; return ::PLUS( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_factor_neg lex_factor_rep::FactorNeg() { static int a[] = {1, 2, 0}; return ::lex_factor_neg( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_term lex_term::Term() { static int a[] = {1, 0, 0}; return ::lex_term( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_factor_rep lex_term::FactorRep() { static int a[] = {2, 0, 2, 1, 0}; return ::lex_factor_rep( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_expr lex_expr::Expr() { static int a[] = {1, 0, 0}; return ::lex_expr( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_term lex_expr::Term() { static int a[] = {2, 0, 2, 1, 0}; return ::lex_term( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::NI opt_ni::Ni() { static int a[] = {1, 0, 0}; return ::NI( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::STAR opt_prod_repeat::Star() { static int a[] = {1, 0, 0}; return ::STAR( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::id opt_prod_el_name::Name() { static int a[] = {1, 0, 0}; return ::id( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::opt_prod_el_name prod_el::OptName() { static int a[] = {1, 0, 0}; return ::opt_prod_el_name( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::id prod_el::Id() { static int a[] = {1, 0, 1}; return ::id( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::opt_prod_repeat prod_el::OptRepeat() { static int a[] = {1, 0, 2}; return ::opt_prod_repeat( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::prod_el_list prod_el_list::ProdElList() { static int a[] = {1, 0, 0}; return ::prod_el_list( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::prod_el prod_el_list::ProdEl() { static int a[] = {1, 0, 1}; return ::prod_el( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::COMMIT opt_commit::Commit() { static int a[] = {1, 0, 0}; return ::COMMIT( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::id opt_prod_name::Name() { static int a[] = {1, 0, 1}; return ::id( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::prod_el_list prod::ProdElList() { static int a[] = {1, 0, 1}; return ::prod_el_list( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::opt_prod_name prod::OptName() { static int a[] = {1, 0, 3}; return ::opt_prod_name( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::opt_commit prod::OptCommit() { static int a[] = {1, 0, 4}; return ::opt_commit( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::prod_list prod_list::ProdList() { static int a[] = {1, 0, 0}; return ::prod_list( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::prod prod_list::Prod() { static int a[] = {2, 0, 2, 1, 0}; return ::prod( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_expr ignore_def::Expr() { static int a[] = {1, 0, 2}; return ::lex_expr( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::id token_def::Id() { static int a[] = {1, 0, 1}; return ::id( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::opt_ni token_def::LeftNi() { static int a[] = {1, 0, 2}; return ::opt_ni( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_expr token_def::Expr() { static int a[] = {1, 0, 4}; return ::lex_expr( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::opt_ni token_def::RightNi() { static int a[] = {1, 0, 6}; return ::opt_ni( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::token_list token_list::TokenList() { static int a[] = {2, 0, 0, 1, 0}; return ::token_list( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::token_def token_list::TokenDef() { static int a[] = {1, 0, 1}; return ::token_def( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::ignore_def token_list::IgnoreDef() { static int a[] = {1, 1, 1}; return ::ignore_def( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::token_list item::TokenList() { static int a[] = {1, 0, 1}; return ::token_list( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::id item::DefId() { static int a[] = {1, 1, 1}; return ::id( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::prod_list item::ProdList() { static int a[] = {1, 1, 2}; return ::prod_list( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::_repeat_item start::ItemList() { static int a[] = {1, 0, 0}; return ::_repeat_item( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::start __accum0::tree() { return ::start( __prg, colm_get_attr( __tree, 0) ); }
::str __accum0::error() { return ::str( __prg, colm_get_attr( __tree, 1) ); }
::_repeat_item _repeat_item:: next() { return ::_repeat_item( __prg, colm_get_repeat_next( __tree ) ); }
::item _repeat_item:: value() { return ::item( __prg, colm_get_repeat_val( __tree ) ); }
::str __list0::head() { return ::str( __prg, colm_get_attr( __tree, 0) ); }
::str __list0::tail() { return ::str( __prg, colm_get_attr( __tree, 1) ); }
::str __list0::top() { return ::str( __prg, colm_get_attr( __tree, 1) ); }
::literal _T_lex_factor::Literal() { static int a[] = {1, 0, 0}; return ::literal( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_expr _T_lex_factor::Expr() { static int a[] = {1, 1, 1}; return ::lex_expr( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::literal _T_lex_factor::Low() { static int a[] = {1, 2, 0}; return ::literal( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::literal _T_lex_factor::High() { static int a[] = {1, 2, 2}; return ::literal( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::id _T_lex_factor::Id() { static int a[] = {1, 3, 0}; return ::id( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_factor_neg _T_lex_factor_neg::FactorNeg() { static int a[] = {1, 0, 1}; return ::lex_factor_neg( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_factor _T_lex_factor_neg::Factor() { static int a[] = {1, 1, 0}; return ::lex_factor( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_factor_rep _T_lex_factor_rep::FactorRep() { static int a[] = {2, 0, 0, 1, 0}; return ::lex_factor_rep( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::STAR _T_lex_factor_rep::Star() { static int a[] = {1, 0, 1}; return ::STAR( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::PLUS _T_lex_factor_rep::Plus() { static int a[] = {1, 1, 1}; return ::PLUS( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_factor_neg _T_lex_factor_rep::FactorNeg() { static int a[] = {1, 2, 0}; return ::lex_factor_neg( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_term _T_lex_term::Term() { static int a[] = {1, 0, 0}; return ::lex_term( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_factor_rep _T_lex_term::FactorRep() { static int a[] = {2, 0, 2, 1, 0}; return ::lex_factor_rep( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_expr _T_lex_expr::Expr() { static int a[] = {1, 0, 0}; return ::lex_expr( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_term _T_lex_expr::Term() { static int a[] = {2, 0, 2, 1, 0}; return ::lex_term( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::NI _T_opt_ni::Ni() { static int a[] = {1, 0, 0}; return ::NI( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::STAR _T_opt_prod_repeat::Star() { static int a[] = {1, 0, 0}; return ::STAR( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::id _T_opt_prod_el_name::Name() { static int a[] = {1, 0, 0}; return ::id( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::opt_prod_el_name _T_prod_el::OptName() { static int a[] = {1, 0, 0}; return ::opt_prod_el_name( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::id _T_prod_el::Id() { static int a[] = {1, 0, 1}; return ::id( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::opt_prod_repeat _T_prod_el::OptRepeat() { static int a[] = {1, 0, 2}; return ::opt_prod_repeat( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::prod_el_list _T_prod_el_list::ProdElList() { static int a[] = {1, 0, 0}; return ::prod_el_list( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::prod_el _T_prod_el_list::ProdEl() { static int a[] = {1, 0, 1}; return ::prod_el( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::COMMIT _T_opt_commit::Commit() { static int a[] = {1, 0, 0}; return ::COMMIT( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::id _T_opt_prod_name::Name() { static int a[] = {1, 0, 1}; return ::id( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::prod_el_list _T_prod::ProdElList() { static int a[] = {1, 0, 1}; return ::prod_el_list( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::opt_prod_name _T_prod::OptName() { static int a[] = {1, 0, 3}; return ::opt_prod_name( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::opt_commit _T_prod::OptCommit() { static int a[] = {1, 0, 4}; return ::opt_commit( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::prod_list _T_prod_list::ProdList() { static int a[] = {1, 0, 0}; return ::prod_list( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::prod _T_prod_list::Prod() { static int a[] = {2, 0, 2, 1, 0}; return ::prod( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_expr _T_ignore_def::Expr() { static int a[] = {1, 0, 2}; return ::lex_expr( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::id _T_token_def::Id() { static int a[] = {1, 0, 1}; return ::id( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::opt_ni _T_token_def::LeftNi() { static int a[] = {1, 0, 2}; return ::opt_ni( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::lex_expr _T_token_def::Expr() { static int a[] = {1, 0, 4}; return ::lex_expr( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::opt_ni _T_token_def::RightNi() { static int a[] = {1, 0, 6}; return ::opt_ni( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::token_list _T_token_list::TokenList() { static int a[] = {2, 0, 0, 1, 0}; return ::token_list( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::token_def _T_token_list::TokenDef() { static int a[] = {1, 0, 1}; return ::token_def( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::ignore_def _T_token_list::IgnoreDef() { static int a[] = {1, 1, 1}; return ::ignore_def( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::token_list _T_item::TokenList() { static int a[] = {1, 0, 1}; return ::token_list( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::id _T_item::DefId() { static int a[] = {1, 1, 1}; return ::id( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::prod_list _T_item::ProdList() { static int a[] = {1, 1, 2}; return ::prod_list( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::_repeat_item _T_start::ItemList() { static int a[] = {1, 0, 0}; return ::_repeat_item( __prg, colm_get_rhs_val( __prg, __tree, a ) ); }
::start _T___accum0::tree() { return ::start( __prg, colm_get_attr( __tree, 0) ); }
::str _T___accum0::error() { return ::str( __prg, colm_get_attr( __tree, 1) ); }
::str _T___list0::head() { return ::str( __prg, colm_get_attr( __tree, 0) ); }
::str _T___list0::tail() { return ::str( __prg, colm_get_attr( __tree, 1) ); }
::str _T___list0::top() { return ::str( __prg, colm_get_attr( __tree, 1) ); }

::start ColmTree( colm_program *prg )
{ return ::start( prg, colm_get_global( prg, 0) ); }

