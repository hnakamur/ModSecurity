// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "seclang-parser.hh"


// Unqualified %code blocks.
#line 331 "seclang-parser.yy"

#include "src/parser/driver.h"

#line 50 "seclang-parser.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 142 "seclang-parser.cc"

  /// Build a parser object.
  seclang_parser::seclang_parser (modsecurity::Parser::Driver& driver_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      driver (driver_yyarg)
  {}

  seclang_parser::~seclang_parser ()
  {}

  seclang_parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  seclang_parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  seclang_parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  seclang_parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  seclang_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  seclang_parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  seclang_parser::symbol_kind_type
  seclang_parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  seclang_parser::stack_symbol_type::stack_symbol_type ()
  {}

  seclang_parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_ACTION_ACCURACY: // "Accuracy"
      case symbol_kind::S_ACTION_ALLOW: // "Allow"
      case symbol_kind::S_ACTION_APPEND: // "Append"
      case symbol_kind::S_ACTION_AUDIT_LOG: // "AuditLog"
      case symbol_kind::S_ACTION_BLOCK: // "Block"
      case symbol_kind::S_ACTION_CAPTURE: // "Capture"
      case symbol_kind::S_ACTION_CHAIN: // "Chain"
      case symbol_kind::S_ACTION_CTL_AUDIT_ENGINE: // "ACTION_CTL_AUDIT_ENGINE"
      case symbol_kind::S_ACTION_CTL_AUDIT_LOG_PARTS: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case symbol_kind::S_ACTION_CTL_BDY_JSON: // "ACTION_CTL_BDY_JSON"
      case symbol_kind::S_ACTION_CTL_BDY_XML: // "ACTION_CTL_BDY_XML"
      case symbol_kind::S_ACTION_CTL_BDY_URLENCODED: // "ACTION_CTL_BDY_URLENCODED"
      case symbol_kind::S_ACTION_CTL_FORCE_REQ_BODY_VAR: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case symbol_kind::S_ACTION_CTL_REQUEST_BODY_ACCESS: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_BY_ID: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_BY_TAG: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_TARGET_BY_ID: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case symbol_kind::S_ACTION_DENY: // "Deny"
      case symbol_kind::S_ACTION_DEPRECATE_VAR: // "DeprecateVar"
      case symbol_kind::S_ACTION_DROP: // "Drop"
      case symbol_kind::S_ACTION_EXEC: // "Exec"
      case symbol_kind::S_ACTION_EXPIRE_VAR: // "ExpireVar"
      case symbol_kind::S_ACTION_ID: // "Id"
      case symbol_kind::S_ACTION_INITCOL: // "InitCol"
      case symbol_kind::S_ACTION_LOG: // "Log"
      case symbol_kind::S_ACTION_LOG_DATA: // "LogData"
      case symbol_kind::S_ACTION_MATURITY: // "Maturity"
      case symbol_kind::S_ACTION_MSG: // "Msg"
      case symbol_kind::S_ACTION_MULTI_MATCH: // "MultiMatch"
      case symbol_kind::S_ACTION_NO_AUDIT_LOG: // "NoAuditLog"
      case symbol_kind::S_ACTION_NO_LOG: // "NoLog"
      case symbol_kind::S_ACTION_PASS: // "Pass"
      case symbol_kind::S_ACTION_PAUSE: // "Pause"
      case symbol_kind::S_ACTION_PHASE: // "Phase"
      case symbol_kind::S_ACTION_PREPEND: // "Prepend"
      case symbol_kind::S_ACTION_PROXY: // "Proxy"
      case symbol_kind::S_ACTION_REDIRECT: // "Redirect"
      case symbol_kind::S_ACTION_REV: // "Rev"
      case symbol_kind::S_ACTION_SANITISE_ARG: // "SanitiseArg"
      case symbol_kind::S_ACTION_SANITISE_MATCHED: // "SanitiseMatched"
      case symbol_kind::S_ACTION_SANITISE_MATCHED_BYTES: // "SanitiseMatchedBytes"
      case symbol_kind::S_ACTION_SANITISE_REQUEST_HEADER: // "SanitiseRequestHeader"
      case symbol_kind::S_ACTION_SANITISE_RESPONSE_HEADER: // "SanitiseResponseHeader"
      case symbol_kind::S_ACTION_SETENV: // "SetEnv"
      case symbol_kind::S_ACTION_SETRSC: // "SetRsc"
      case symbol_kind::S_ACTION_SETSID: // "SetSid"
      case symbol_kind::S_ACTION_SETUID: // "SetUID"
      case symbol_kind::S_ACTION_SEVERITY: // "Severity"
      case symbol_kind::S_ACTION_SKIP: // "Skip"
      case symbol_kind::S_ACTION_SKIP_AFTER: // "SkipAfter"
      case symbol_kind::S_ACTION_STATUS: // "Status"
      case symbol_kind::S_ACTION_TAG: // "Tag"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_ENCODE: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_DECODE: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_DECODE_EXT: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case symbol_kind::S_ACTION_TRANSFORMATION_CMD_LINE: // "ACTION_TRANSFORMATION_CMD_LINE"
      case symbol_kind::S_ACTION_TRANSFORMATION_COMPRESS_WHITESPACE: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case symbol_kind::S_ACTION_TRANSFORMATION_CSS_DECODE: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HEX_ENCODE: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HEX_DECODE: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HTML_ENTITY_DECODE: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_JS_DECODE: // "ACTION_TRANSFORMATION_JS_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_LENGTH: // "ACTION_TRANSFORMATION_LENGTH"
      case symbol_kind::S_ACTION_TRANSFORMATION_LOWERCASE: // "ACTION_TRANSFORMATION_LOWERCASE"
      case symbol_kind::S_ACTION_TRANSFORMATION_MD5: // "ACTION_TRANSFORMATION_MD5"
      case symbol_kind::S_ACTION_TRANSFORMATION_NONE: // "ACTION_TRANSFORMATION_NONE"
      case symbol_kind::S_ACTION_TRANSFORMATION_NORMALISE_PATH: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case symbol_kind::S_ACTION_TRANSFORMATION_NORMALISE_PATH_WIN: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_ODD_7_BIT: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_COMMENTS: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_NULLS: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_WHITESPACE: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case symbol_kind::S_ACTION_TRANSFORMATION_REPLACE_COMMENTS: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REPLACE_NULLS: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case symbol_kind::S_ACTION_TRANSFORMATION_SHA1: // "ACTION_TRANSFORMATION_SHA1"
      case symbol_kind::S_ACTION_TRANSFORMATION_SQL_HEX_DECODE: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM: // "ACTION_TRANSFORMATION_TRIM"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM_LEFT: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM_RIGHT: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case symbol_kind::S_ACTION_TRANSFORMATION_UPPERCASE: // "ACTION_TRANSFORMATION_UPPERCASE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_ENCODE: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_DECODE: // "ACTION_TRANSFORMATION_URL_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_DECODE_UNI: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case symbol_kind::S_ACTION_TRANSFORMATION_UTF8_TO_UNICODE: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case symbol_kind::S_ACTION_VER: // "Ver"
      case symbol_kind::S_ACTION_XMLNS: // "xmlns"
      case symbol_kind::S_CONFIG_COMPONENT_SIG: // "CONFIG_COMPONENT_SIG"
      case symbol_kind::S_CONFIG_CONN_ENGINE: // "CONFIG_CONN_ENGINE"
      case symbol_kind::S_CONFIG_SEC_ARGUMENT_SEPARATOR: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case symbol_kind::S_CONFIG_SEC_WEB_APP_ID: // "CONFIG_SEC_WEB_APP_ID"
      case symbol_kind::S_CONFIG_SEC_SERVER_SIG: // "CONFIG_SEC_SERVER_SIG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_DIR: // "CONFIG_DIR_AUDIT_DIR"
      case symbol_kind::S_CONFIG_DIR_AUDIT_DIR_MOD: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case symbol_kind::S_CONFIG_DIR_AUDIT_ENG: // "CONFIG_DIR_AUDIT_ENG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_FLE_MOD: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG: // "CONFIG_DIR_AUDIT_LOG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG2: // "CONFIG_DIR_AUDIT_LOG2"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG_P: // "CONFIG_DIR_AUDIT_LOG_P"
      case symbol_kind::S_CONFIG_DIR_AUDIT_STS: // "CONFIG_DIR_AUDIT_STS"
      case symbol_kind::S_CONFIG_DIR_AUDIT_TPE: // "CONFIG_DIR_AUDIT_TPE"
      case symbol_kind::S_CONFIG_DIR_DEBUG_LOG: // "CONFIG_DIR_DEBUG_LOG"
      case symbol_kind::S_CONFIG_DIR_DEBUG_LVL: // "CONFIG_DIR_DEBUG_LVL"
      case symbol_kind::S_CONFIG_SEC_CACHE_TRANSFORMATIONS: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case symbol_kind::S_CONFIG_SEC_DISABLE_BACKEND_COMPRESS: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case symbol_kind::S_CONFIG_SEC_HASH_ENGINE: // "CONFIG_SEC_HASH_ENGINE"
      case symbol_kind::S_CONFIG_SEC_HASH_KEY: // "CONFIG_SEC_HASH_KEY"
      case symbol_kind::S_CONFIG_SEC_HASH_PARAM: // "CONFIG_SEC_HASH_PARAM"
      case symbol_kind::S_CONFIG_SEC_HASH_METHOD_RX: // "CONFIG_SEC_HASH_METHOD_RX"
      case symbol_kind::S_CONFIG_SEC_HASH_METHOD_PM: // "CONFIG_SEC_HASH_METHOD_PM"
      case symbol_kind::S_CONFIG_SEC_CHROOT_DIR: // "CONFIG_SEC_CHROOT_DIR"
      case symbol_kind::S_CONFIG_DIR_GEO_DB: // "CONFIG_DIR_GEO_DB"
      case symbol_kind::S_CONFIG_DIR_GSB_DB: // "CONFIG_DIR_GSB_DB"
      case symbol_kind::S_CONFIG_SEC_GUARDIAN_LOG: // "CONFIG_SEC_GUARDIAN_LOG"
      case symbol_kind::S_CONFIG_DIR_PCRE_MATCH_LIMIT: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case symbol_kind::S_CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case symbol_kind::S_CONFIG_SEC_CONN_R_STATE_LIMIT: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case symbol_kind::S_CONFIG_SEC_CONN_W_STATE_LIMIT: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case symbol_kind::S_CONFIG_SEC_SENSOR_ID: // "CONFIG_SEC_SENSOR_ID"
      case symbol_kind::S_CONFIG_DIR_ARGS_LIMIT: // "CONFIG_DIR_ARGS_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT: // "CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY: // "CONFIG_DIR_REQ_BODY"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_LIMIT: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_LIMIT_ACTION: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case symbol_kind::S_CONFIG_DIR_RES_BODY: // "CONFIG_DIR_RES_BODY"
      case symbol_kind::S_CONFIG_DIR_RES_BODY_LIMIT: // "CONFIG_DIR_RES_BODY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_RES_BODY_LIMIT_ACTION: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case symbol_kind::S_CONFIG_SEC_RULE_INHERITANCE: // "CONFIG_SEC_RULE_INHERITANCE"
      case symbol_kind::S_CONFIG_SEC_RULE_PERF_TIME: // "CONFIG_SEC_RULE_PERF_TIME"
      case symbol_kind::S_CONFIG_DIR_RULE_ENG: // "CONFIG_DIR_RULE_ENG"
      case symbol_kind::S_CONFIG_DIR_SEC_ACTION: // "CONFIG_DIR_SEC_ACTION"
      case symbol_kind::S_CONFIG_DIR_SEC_DEFAULT_ACTION: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case symbol_kind::S_CONFIG_DIR_SEC_MARKER: // "CONFIG_DIR_SEC_MARKER"
      case symbol_kind::S_CONFIG_DIR_UNICODE_MAP_FILE: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case symbol_kind::S_CONFIG_DIR_UNICODE_CODE_PAGE: // "CONFIG_DIR_UNICODE_CODE_PAGE"
      case symbol_kind::S_CONFIG_SEC_COLLECTION_TIMEOUT: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case symbol_kind::S_CONFIG_SEC_HTTP_BLKEY: // "CONFIG_SEC_HTTP_BLKEY"
      case symbol_kind::S_CONFIG_SEC_INTERCEPT_ON_ERROR: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case symbol_kind::S_CONFIG_SEC_REMOTE_RULES_FAIL_ACTION: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_ID: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_MSG: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_TAG: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case symbol_kind::S_CONFIG_UPDLOAD_KEEP_FILES: // "CONFIG_UPDLOAD_KEEP_FILES"
      case symbol_kind::S_CONFIG_UPDLOAD_SAVE_TMP_FILES: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case symbol_kind::S_CONFIG_UPLOAD_DIR: // "CONFIG_UPLOAD_DIR"
      case symbol_kind::S_CONFIG_UPLOAD_FILE_LIMIT: // "CONFIG_UPLOAD_FILE_LIMIT"
      case symbol_kind::S_CONFIG_UPLOAD_FILE_MODE: // "CONFIG_UPLOAD_FILE_MODE"
      case symbol_kind::S_CONFIG_VALUE_ABORT: // "CONFIG_VALUE_ABORT"
      case symbol_kind::S_CONFIG_VALUE_DETC: // "CONFIG_VALUE_DETC"
      case symbol_kind::S_CONFIG_VALUE_HTTPS: // "CONFIG_VALUE_HTTPS"
      case symbol_kind::S_CONFIG_VALUE_OFF: // "CONFIG_VALUE_OFF"
      case symbol_kind::S_CONFIG_VALUE_ON: // "CONFIG_VALUE_ON"
      case symbol_kind::S_CONFIG_VALUE_PARALLEL: // "CONFIG_VALUE_PARALLEL"
      case symbol_kind::S_CONFIG_VALUE_PROCESS_PARTIAL: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case symbol_kind::S_CONFIG_VALUE_REJECT: // "CONFIG_VALUE_REJECT"
      case symbol_kind::S_CONFIG_VALUE_RELEVANT_ONLY: // "CONFIG_VALUE_RELEVANT_ONLY"
      case symbol_kind::S_CONFIG_VALUE_SERIAL: // "CONFIG_VALUE_SERIAL"
      case symbol_kind::S_CONFIG_VALUE_WARN: // "CONFIG_VALUE_WARN"
      case symbol_kind::S_CONFIG_XML_EXTERNAL_ENTITY: // "CONFIG_XML_EXTERNAL_ENTITY"
      case symbol_kind::S_CONGIG_DIR_RESPONSE_BODY_MP: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case symbol_kind::S_CONGIG_DIR_SEC_ARG_SEP: // "CONGIG_DIR_SEC_ARG_SEP"
      case symbol_kind::S_CONGIG_DIR_SEC_COOKIE_FORMAT: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case symbol_kind::S_CONFIG_SEC_COOKIEV0_SEPARATOR: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case symbol_kind::S_CONGIG_DIR_SEC_DATA_DIR: // "CONGIG_DIR_SEC_DATA_DIR"
      case symbol_kind::S_CONGIG_DIR_SEC_STATUS_ENGINE: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case symbol_kind::S_CONFIG_SEC_STREAM_IN_BODY_INSPECTION: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case symbol_kind::S_CONFIG_SEC_STREAM_OUT_BODY_INSPECTION: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case symbol_kind::S_CONGIG_DIR_SEC_TMP_DIR: // "CONGIG_DIR_SEC_TMP_DIR"
      case symbol_kind::S_DIRECTIVE: // "DIRECTIVE"
      case symbol_kind::S_DIRECTIVE_SECRULESCRIPT: // "DIRECTIVE_SECRULESCRIPT"
      case symbol_kind::S_FREE_TEXT_QUOTE_MACRO_EXPANSION: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case symbol_kind::S_QUOTATION_MARK: // "QUOTATION_MARK"
      case symbol_kind::S_RUN_TIME_VAR_BLD: // "RUN_TIME_VAR_BLD"
      case symbol_kind::S_RUN_TIME_VAR_DUR: // "RUN_TIME_VAR_DUR"
      case symbol_kind::S_RUN_TIME_VAR_HSV: // "RUN_TIME_VAR_HSV"
      case symbol_kind::S_RUN_TIME_VAR_REMOTE_USER: // "RUN_TIME_VAR_REMOTE_USER"
      case symbol_kind::S_RUN_TIME_VAR_TIME: // "RUN_TIME_VAR_TIME"
      case symbol_kind::S_RUN_TIME_VAR_TIME_DAY: // "RUN_TIME_VAR_TIME_DAY"
      case symbol_kind::S_RUN_TIME_VAR_TIME_EPOCH: // "RUN_TIME_VAR_TIME_EPOCH"
      case symbol_kind::S_RUN_TIME_VAR_TIME_HOUR: // "RUN_TIME_VAR_TIME_HOUR"
      case symbol_kind::S_RUN_TIME_VAR_TIME_MIN: // "RUN_TIME_VAR_TIME_MIN"
      case symbol_kind::S_RUN_TIME_VAR_TIME_MON: // "RUN_TIME_VAR_TIME_MON"
      case symbol_kind::S_RUN_TIME_VAR_TIME_SEC: // "RUN_TIME_VAR_TIME_SEC"
      case symbol_kind::S_RUN_TIME_VAR_TIME_WDAY: // "RUN_TIME_VAR_TIME_WDAY"
      case symbol_kind::S_RUN_TIME_VAR_TIME_YEAR: // "RUN_TIME_VAR_TIME_YEAR"
      case symbol_kind::S_VARIABLE: // "VARIABLE"
      case symbol_kind::S_DICT_ELEMENT: // "Dictionary element"
      case symbol_kind::S_DICT_ELEMENT_WITH_EQUALS: // "Dictionary element, with equals"
      case symbol_kind::S_DICT_ELEMENT_REGEXP: // "Dictionary element, selected by regexp"
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_op: // op
      case symbol_kind::S_op_before_init: // op_before_init
        value.YY_MOVE_OR_COPY< std::unique_ptr<Operator> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_run_time_string: // run_time_string
        value.YY_MOVE_OR_COPY< std::unique_ptr<RunTimeString> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_var: // var
        value.YY_MOVE_OR_COPY< std::unique_ptr<Variable> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_act: // act
      case symbol_kind::S_setvar_action: // setvar_action
        value.YY_MOVE_OR_COPY< std::unique_ptr<actions::Action> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_variables: // variables
      case symbol_kind::S_variables_pre_process: // variables_pre_process
      case symbol_kind::S_variables_may_be_quoted: // variables_may_be_quoted
        value.YY_MOVE_OR_COPY< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_actions: // actions
      case symbol_kind::S_actions_may_quoted: // actions_may_quoted
        value.YY_MOVE_OR_COPY< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  seclang_parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_ACTION_ACCURACY: // "Accuracy"
      case symbol_kind::S_ACTION_ALLOW: // "Allow"
      case symbol_kind::S_ACTION_APPEND: // "Append"
      case symbol_kind::S_ACTION_AUDIT_LOG: // "AuditLog"
      case symbol_kind::S_ACTION_BLOCK: // "Block"
      case symbol_kind::S_ACTION_CAPTURE: // "Capture"
      case symbol_kind::S_ACTION_CHAIN: // "Chain"
      case symbol_kind::S_ACTION_CTL_AUDIT_ENGINE: // "ACTION_CTL_AUDIT_ENGINE"
      case symbol_kind::S_ACTION_CTL_AUDIT_LOG_PARTS: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case symbol_kind::S_ACTION_CTL_BDY_JSON: // "ACTION_CTL_BDY_JSON"
      case symbol_kind::S_ACTION_CTL_BDY_XML: // "ACTION_CTL_BDY_XML"
      case symbol_kind::S_ACTION_CTL_BDY_URLENCODED: // "ACTION_CTL_BDY_URLENCODED"
      case symbol_kind::S_ACTION_CTL_FORCE_REQ_BODY_VAR: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case symbol_kind::S_ACTION_CTL_REQUEST_BODY_ACCESS: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_BY_ID: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_BY_TAG: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_TARGET_BY_ID: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case symbol_kind::S_ACTION_DENY: // "Deny"
      case symbol_kind::S_ACTION_DEPRECATE_VAR: // "DeprecateVar"
      case symbol_kind::S_ACTION_DROP: // "Drop"
      case symbol_kind::S_ACTION_EXEC: // "Exec"
      case symbol_kind::S_ACTION_EXPIRE_VAR: // "ExpireVar"
      case symbol_kind::S_ACTION_ID: // "Id"
      case symbol_kind::S_ACTION_INITCOL: // "InitCol"
      case symbol_kind::S_ACTION_LOG: // "Log"
      case symbol_kind::S_ACTION_LOG_DATA: // "LogData"
      case symbol_kind::S_ACTION_MATURITY: // "Maturity"
      case symbol_kind::S_ACTION_MSG: // "Msg"
      case symbol_kind::S_ACTION_MULTI_MATCH: // "MultiMatch"
      case symbol_kind::S_ACTION_NO_AUDIT_LOG: // "NoAuditLog"
      case symbol_kind::S_ACTION_NO_LOG: // "NoLog"
      case symbol_kind::S_ACTION_PASS: // "Pass"
      case symbol_kind::S_ACTION_PAUSE: // "Pause"
      case symbol_kind::S_ACTION_PHASE: // "Phase"
      case symbol_kind::S_ACTION_PREPEND: // "Prepend"
      case symbol_kind::S_ACTION_PROXY: // "Proxy"
      case symbol_kind::S_ACTION_REDIRECT: // "Redirect"
      case symbol_kind::S_ACTION_REV: // "Rev"
      case symbol_kind::S_ACTION_SANITISE_ARG: // "SanitiseArg"
      case symbol_kind::S_ACTION_SANITISE_MATCHED: // "SanitiseMatched"
      case symbol_kind::S_ACTION_SANITISE_MATCHED_BYTES: // "SanitiseMatchedBytes"
      case symbol_kind::S_ACTION_SANITISE_REQUEST_HEADER: // "SanitiseRequestHeader"
      case symbol_kind::S_ACTION_SANITISE_RESPONSE_HEADER: // "SanitiseResponseHeader"
      case symbol_kind::S_ACTION_SETENV: // "SetEnv"
      case symbol_kind::S_ACTION_SETRSC: // "SetRsc"
      case symbol_kind::S_ACTION_SETSID: // "SetSid"
      case symbol_kind::S_ACTION_SETUID: // "SetUID"
      case symbol_kind::S_ACTION_SEVERITY: // "Severity"
      case symbol_kind::S_ACTION_SKIP: // "Skip"
      case symbol_kind::S_ACTION_SKIP_AFTER: // "SkipAfter"
      case symbol_kind::S_ACTION_STATUS: // "Status"
      case symbol_kind::S_ACTION_TAG: // "Tag"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_ENCODE: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_DECODE: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_DECODE_EXT: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case symbol_kind::S_ACTION_TRANSFORMATION_CMD_LINE: // "ACTION_TRANSFORMATION_CMD_LINE"
      case symbol_kind::S_ACTION_TRANSFORMATION_COMPRESS_WHITESPACE: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case symbol_kind::S_ACTION_TRANSFORMATION_CSS_DECODE: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HEX_ENCODE: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HEX_DECODE: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HTML_ENTITY_DECODE: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_JS_DECODE: // "ACTION_TRANSFORMATION_JS_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_LENGTH: // "ACTION_TRANSFORMATION_LENGTH"
      case symbol_kind::S_ACTION_TRANSFORMATION_LOWERCASE: // "ACTION_TRANSFORMATION_LOWERCASE"
      case symbol_kind::S_ACTION_TRANSFORMATION_MD5: // "ACTION_TRANSFORMATION_MD5"
      case symbol_kind::S_ACTION_TRANSFORMATION_NONE: // "ACTION_TRANSFORMATION_NONE"
      case symbol_kind::S_ACTION_TRANSFORMATION_NORMALISE_PATH: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case symbol_kind::S_ACTION_TRANSFORMATION_NORMALISE_PATH_WIN: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_ODD_7_BIT: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_COMMENTS: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_NULLS: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_WHITESPACE: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case symbol_kind::S_ACTION_TRANSFORMATION_REPLACE_COMMENTS: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REPLACE_NULLS: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case symbol_kind::S_ACTION_TRANSFORMATION_SHA1: // "ACTION_TRANSFORMATION_SHA1"
      case symbol_kind::S_ACTION_TRANSFORMATION_SQL_HEX_DECODE: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM: // "ACTION_TRANSFORMATION_TRIM"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM_LEFT: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM_RIGHT: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case symbol_kind::S_ACTION_TRANSFORMATION_UPPERCASE: // "ACTION_TRANSFORMATION_UPPERCASE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_ENCODE: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_DECODE: // "ACTION_TRANSFORMATION_URL_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_DECODE_UNI: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case symbol_kind::S_ACTION_TRANSFORMATION_UTF8_TO_UNICODE: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case symbol_kind::S_ACTION_VER: // "Ver"
      case symbol_kind::S_ACTION_XMLNS: // "xmlns"
      case symbol_kind::S_CONFIG_COMPONENT_SIG: // "CONFIG_COMPONENT_SIG"
      case symbol_kind::S_CONFIG_CONN_ENGINE: // "CONFIG_CONN_ENGINE"
      case symbol_kind::S_CONFIG_SEC_ARGUMENT_SEPARATOR: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case symbol_kind::S_CONFIG_SEC_WEB_APP_ID: // "CONFIG_SEC_WEB_APP_ID"
      case symbol_kind::S_CONFIG_SEC_SERVER_SIG: // "CONFIG_SEC_SERVER_SIG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_DIR: // "CONFIG_DIR_AUDIT_DIR"
      case symbol_kind::S_CONFIG_DIR_AUDIT_DIR_MOD: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case symbol_kind::S_CONFIG_DIR_AUDIT_ENG: // "CONFIG_DIR_AUDIT_ENG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_FLE_MOD: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG: // "CONFIG_DIR_AUDIT_LOG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG2: // "CONFIG_DIR_AUDIT_LOG2"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG_P: // "CONFIG_DIR_AUDIT_LOG_P"
      case symbol_kind::S_CONFIG_DIR_AUDIT_STS: // "CONFIG_DIR_AUDIT_STS"
      case symbol_kind::S_CONFIG_DIR_AUDIT_TPE: // "CONFIG_DIR_AUDIT_TPE"
      case symbol_kind::S_CONFIG_DIR_DEBUG_LOG: // "CONFIG_DIR_DEBUG_LOG"
      case symbol_kind::S_CONFIG_DIR_DEBUG_LVL: // "CONFIG_DIR_DEBUG_LVL"
      case symbol_kind::S_CONFIG_SEC_CACHE_TRANSFORMATIONS: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case symbol_kind::S_CONFIG_SEC_DISABLE_BACKEND_COMPRESS: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case symbol_kind::S_CONFIG_SEC_HASH_ENGINE: // "CONFIG_SEC_HASH_ENGINE"
      case symbol_kind::S_CONFIG_SEC_HASH_KEY: // "CONFIG_SEC_HASH_KEY"
      case symbol_kind::S_CONFIG_SEC_HASH_PARAM: // "CONFIG_SEC_HASH_PARAM"
      case symbol_kind::S_CONFIG_SEC_HASH_METHOD_RX: // "CONFIG_SEC_HASH_METHOD_RX"
      case symbol_kind::S_CONFIG_SEC_HASH_METHOD_PM: // "CONFIG_SEC_HASH_METHOD_PM"
      case symbol_kind::S_CONFIG_SEC_CHROOT_DIR: // "CONFIG_SEC_CHROOT_DIR"
      case symbol_kind::S_CONFIG_DIR_GEO_DB: // "CONFIG_DIR_GEO_DB"
      case symbol_kind::S_CONFIG_DIR_GSB_DB: // "CONFIG_DIR_GSB_DB"
      case symbol_kind::S_CONFIG_SEC_GUARDIAN_LOG: // "CONFIG_SEC_GUARDIAN_LOG"
      case symbol_kind::S_CONFIG_DIR_PCRE_MATCH_LIMIT: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case symbol_kind::S_CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case symbol_kind::S_CONFIG_SEC_CONN_R_STATE_LIMIT: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case symbol_kind::S_CONFIG_SEC_CONN_W_STATE_LIMIT: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case symbol_kind::S_CONFIG_SEC_SENSOR_ID: // "CONFIG_SEC_SENSOR_ID"
      case symbol_kind::S_CONFIG_DIR_ARGS_LIMIT: // "CONFIG_DIR_ARGS_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT: // "CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY: // "CONFIG_DIR_REQ_BODY"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_LIMIT: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_LIMIT_ACTION: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case symbol_kind::S_CONFIG_DIR_RES_BODY: // "CONFIG_DIR_RES_BODY"
      case symbol_kind::S_CONFIG_DIR_RES_BODY_LIMIT: // "CONFIG_DIR_RES_BODY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_RES_BODY_LIMIT_ACTION: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case symbol_kind::S_CONFIG_SEC_RULE_INHERITANCE: // "CONFIG_SEC_RULE_INHERITANCE"
      case symbol_kind::S_CONFIG_SEC_RULE_PERF_TIME: // "CONFIG_SEC_RULE_PERF_TIME"
      case symbol_kind::S_CONFIG_DIR_RULE_ENG: // "CONFIG_DIR_RULE_ENG"
      case symbol_kind::S_CONFIG_DIR_SEC_ACTION: // "CONFIG_DIR_SEC_ACTION"
      case symbol_kind::S_CONFIG_DIR_SEC_DEFAULT_ACTION: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case symbol_kind::S_CONFIG_DIR_SEC_MARKER: // "CONFIG_DIR_SEC_MARKER"
      case symbol_kind::S_CONFIG_DIR_UNICODE_MAP_FILE: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case symbol_kind::S_CONFIG_DIR_UNICODE_CODE_PAGE: // "CONFIG_DIR_UNICODE_CODE_PAGE"
      case symbol_kind::S_CONFIG_SEC_COLLECTION_TIMEOUT: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case symbol_kind::S_CONFIG_SEC_HTTP_BLKEY: // "CONFIG_SEC_HTTP_BLKEY"
      case symbol_kind::S_CONFIG_SEC_INTERCEPT_ON_ERROR: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case symbol_kind::S_CONFIG_SEC_REMOTE_RULES_FAIL_ACTION: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_ID: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_MSG: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_TAG: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case symbol_kind::S_CONFIG_UPDLOAD_KEEP_FILES: // "CONFIG_UPDLOAD_KEEP_FILES"
      case symbol_kind::S_CONFIG_UPDLOAD_SAVE_TMP_FILES: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case symbol_kind::S_CONFIG_UPLOAD_DIR: // "CONFIG_UPLOAD_DIR"
      case symbol_kind::S_CONFIG_UPLOAD_FILE_LIMIT: // "CONFIG_UPLOAD_FILE_LIMIT"
      case symbol_kind::S_CONFIG_UPLOAD_FILE_MODE: // "CONFIG_UPLOAD_FILE_MODE"
      case symbol_kind::S_CONFIG_VALUE_ABORT: // "CONFIG_VALUE_ABORT"
      case symbol_kind::S_CONFIG_VALUE_DETC: // "CONFIG_VALUE_DETC"
      case symbol_kind::S_CONFIG_VALUE_HTTPS: // "CONFIG_VALUE_HTTPS"
      case symbol_kind::S_CONFIG_VALUE_OFF: // "CONFIG_VALUE_OFF"
      case symbol_kind::S_CONFIG_VALUE_ON: // "CONFIG_VALUE_ON"
      case symbol_kind::S_CONFIG_VALUE_PARALLEL: // "CONFIG_VALUE_PARALLEL"
      case symbol_kind::S_CONFIG_VALUE_PROCESS_PARTIAL: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case symbol_kind::S_CONFIG_VALUE_REJECT: // "CONFIG_VALUE_REJECT"
      case symbol_kind::S_CONFIG_VALUE_RELEVANT_ONLY: // "CONFIG_VALUE_RELEVANT_ONLY"
      case symbol_kind::S_CONFIG_VALUE_SERIAL: // "CONFIG_VALUE_SERIAL"
      case symbol_kind::S_CONFIG_VALUE_WARN: // "CONFIG_VALUE_WARN"
      case symbol_kind::S_CONFIG_XML_EXTERNAL_ENTITY: // "CONFIG_XML_EXTERNAL_ENTITY"
      case symbol_kind::S_CONGIG_DIR_RESPONSE_BODY_MP: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case symbol_kind::S_CONGIG_DIR_SEC_ARG_SEP: // "CONGIG_DIR_SEC_ARG_SEP"
      case symbol_kind::S_CONGIG_DIR_SEC_COOKIE_FORMAT: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case symbol_kind::S_CONFIG_SEC_COOKIEV0_SEPARATOR: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case symbol_kind::S_CONGIG_DIR_SEC_DATA_DIR: // "CONGIG_DIR_SEC_DATA_DIR"
      case symbol_kind::S_CONGIG_DIR_SEC_STATUS_ENGINE: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case symbol_kind::S_CONFIG_SEC_STREAM_IN_BODY_INSPECTION: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case symbol_kind::S_CONFIG_SEC_STREAM_OUT_BODY_INSPECTION: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case symbol_kind::S_CONGIG_DIR_SEC_TMP_DIR: // "CONGIG_DIR_SEC_TMP_DIR"
      case symbol_kind::S_DIRECTIVE: // "DIRECTIVE"
      case symbol_kind::S_DIRECTIVE_SECRULESCRIPT: // "DIRECTIVE_SECRULESCRIPT"
      case symbol_kind::S_FREE_TEXT_QUOTE_MACRO_EXPANSION: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case symbol_kind::S_QUOTATION_MARK: // "QUOTATION_MARK"
      case symbol_kind::S_RUN_TIME_VAR_BLD: // "RUN_TIME_VAR_BLD"
      case symbol_kind::S_RUN_TIME_VAR_DUR: // "RUN_TIME_VAR_DUR"
      case symbol_kind::S_RUN_TIME_VAR_HSV: // "RUN_TIME_VAR_HSV"
      case symbol_kind::S_RUN_TIME_VAR_REMOTE_USER: // "RUN_TIME_VAR_REMOTE_USER"
      case symbol_kind::S_RUN_TIME_VAR_TIME: // "RUN_TIME_VAR_TIME"
      case symbol_kind::S_RUN_TIME_VAR_TIME_DAY: // "RUN_TIME_VAR_TIME_DAY"
      case symbol_kind::S_RUN_TIME_VAR_TIME_EPOCH: // "RUN_TIME_VAR_TIME_EPOCH"
      case symbol_kind::S_RUN_TIME_VAR_TIME_HOUR: // "RUN_TIME_VAR_TIME_HOUR"
      case symbol_kind::S_RUN_TIME_VAR_TIME_MIN: // "RUN_TIME_VAR_TIME_MIN"
      case symbol_kind::S_RUN_TIME_VAR_TIME_MON: // "RUN_TIME_VAR_TIME_MON"
      case symbol_kind::S_RUN_TIME_VAR_TIME_SEC: // "RUN_TIME_VAR_TIME_SEC"
      case symbol_kind::S_RUN_TIME_VAR_TIME_WDAY: // "RUN_TIME_VAR_TIME_WDAY"
      case symbol_kind::S_RUN_TIME_VAR_TIME_YEAR: // "RUN_TIME_VAR_TIME_YEAR"
      case symbol_kind::S_VARIABLE: // "VARIABLE"
      case symbol_kind::S_DICT_ELEMENT: // "Dictionary element"
      case symbol_kind::S_DICT_ELEMENT_WITH_EQUALS: // "Dictionary element, with equals"
      case symbol_kind::S_DICT_ELEMENT_REGEXP: // "Dictionary element, selected by regexp"
        value.move< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_op: // op
      case symbol_kind::S_op_before_init: // op_before_init
        value.move< std::unique_ptr<Operator> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_run_time_string: // run_time_string
        value.move< std::unique_ptr<RunTimeString> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_var: // var
        value.move< std::unique_ptr<Variable> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_act: // act
      case symbol_kind::S_setvar_action: // setvar_action
        value.move< std::unique_ptr<actions::Action> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_variables: // variables
      case symbol_kind::S_variables_pre_process: // variables_pre_process
      case symbol_kind::S_variables_may_be_quoted: // variables_may_be_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_actions: // actions
      case symbol_kind::S_actions_may_quoted: // actions_may_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  seclang_parser::stack_symbol_type&
  seclang_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_ACTION_ACCURACY: // "Accuracy"
      case symbol_kind::S_ACTION_ALLOW: // "Allow"
      case symbol_kind::S_ACTION_APPEND: // "Append"
      case symbol_kind::S_ACTION_AUDIT_LOG: // "AuditLog"
      case symbol_kind::S_ACTION_BLOCK: // "Block"
      case symbol_kind::S_ACTION_CAPTURE: // "Capture"
      case symbol_kind::S_ACTION_CHAIN: // "Chain"
      case symbol_kind::S_ACTION_CTL_AUDIT_ENGINE: // "ACTION_CTL_AUDIT_ENGINE"
      case symbol_kind::S_ACTION_CTL_AUDIT_LOG_PARTS: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case symbol_kind::S_ACTION_CTL_BDY_JSON: // "ACTION_CTL_BDY_JSON"
      case symbol_kind::S_ACTION_CTL_BDY_XML: // "ACTION_CTL_BDY_XML"
      case symbol_kind::S_ACTION_CTL_BDY_URLENCODED: // "ACTION_CTL_BDY_URLENCODED"
      case symbol_kind::S_ACTION_CTL_FORCE_REQ_BODY_VAR: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case symbol_kind::S_ACTION_CTL_REQUEST_BODY_ACCESS: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_BY_ID: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_BY_TAG: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_TARGET_BY_ID: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case symbol_kind::S_ACTION_DENY: // "Deny"
      case symbol_kind::S_ACTION_DEPRECATE_VAR: // "DeprecateVar"
      case symbol_kind::S_ACTION_DROP: // "Drop"
      case symbol_kind::S_ACTION_EXEC: // "Exec"
      case symbol_kind::S_ACTION_EXPIRE_VAR: // "ExpireVar"
      case symbol_kind::S_ACTION_ID: // "Id"
      case symbol_kind::S_ACTION_INITCOL: // "InitCol"
      case symbol_kind::S_ACTION_LOG: // "Log"
      case symbol_kind::S_ACTION_LOG_DATA: // "LogData"
      case symbol_kind::S_ACTION_MATURITY: // "Maturity"
      case symbol_kind::S_ACTION_MSG: // "Msg"
      case symbol_kind::S_ACTION_MULTI_MATCH: // "MultiMatch"
      case symbol_kind::S_ACTION_NO_AUDIT_LOG: // "NoAuditLog"
      case symbol_kind::S_ACTION_NO_LOG: // "NoLog"
      case symbol_kind::S_ACTION_PASS: // "Pass"
      case symbol_kind::S_ACTION_PAUSE: // "Pause"
      case symbol_kind::S_ACTION_PHASE: // "Phase"
      case symbol_kind::S_ACTION_PREPEND: // "Prepend"
      case symbol_kind::S_ACTION_PROXY: // "Proxy"
      case symbol_kind::S_ACTION_REDIRECT: // "Redirect"
      case symbol_kind::S_ACTION_REV: // "Rev"
      case symbol_kind::S_ACTION_SANITISE_ARG: // "SanitiseArg"
      case symbol_kind::S_ACTION_SANITISE_MATCHED: // "SanitiseMatched"
      case symbol_kind::S_ACTION_SANITISE_MATCHED_BYTES: // "SanitiseMatchedBytes"
      case symbol_kind::S_ACTION_SANITISE_REQUEST_HEADER: // "SanitiseRequestHeader"
      case symbol_kind::S_ACTION_SANITISE_RESPONSE_HEADER: // "SanitiseResponseHeader"
      case symbol_kind::S_ACTION_SETENV: // "SetEnv"
      case symbol_kind::S_ACTION_SETRSC: // "SetRsc"
      case symbol_kind::S_ACTION_SETSID: // "SetSid"
      case symbol_kind::S_ACTION_SETUID: // "SetUID"
      case symbol_kind::S_ACTION_SEVERITY: // "Severity"
      case symbol_kind::S_ACTION_SKIP: // "Skip"
      case symbol_kind::S_ACTION_SKIP_AFTER: // "SkipAfter"
      case symbol_kind::S_ACTION_STATUS: // "Status"
      case symbol_kind::S_ACTION_TAG: // "Tag"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_ENCODE: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_DECODE: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_DECODE_EXT: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case symbol_kind::S_ACTION_TRANSFORMATION_CMD_LINE: // "ACTION_TRANSFORMATION_CMD_LINE"
      case symbol_kind::S_ACTION_TRANSFORMATION_COMPRESS_WHITESPACE: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case symbol_kind::S_ACTION_TRANSFORMATION_CSS_DECODE: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HEX_ENCODE: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HEX_DECODE: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HTML_ENTITY_DECODE: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_JS_DECODE: // "ACTION_TRANSFORMATION_JS_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_LENGTH: // "ACTION_TRANSFORMATION_LENGTH"
      case symbol_kind::S_ACTION_TRANSFORMATION_LOWERCASE: // "ACTION_TRANSFORMATION_LOWERCASE"
      case symbol_kind::S_ACTION_TRANSFORMATION_MD5: // "ACTION_TRANSFORMATION_MD5"
      case symbol_kind::S_ACTION_TRANSFORMATION_NONE: // "ACTION_TRANSFORMATION_NONE"
      case symbol_kind::S_ACTION_TRANSFORMATION_NORMALISE_PATH: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case symbol_kind::S_ACTION_TRANSFORMATION_NORMALISE_PATH_WIN: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_ODD_7_BIT: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_COMMENTS: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_NULLS: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_WHITESPACE: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case symbol_kind::S_ACTION_TRANSFORMATION_REPLACE_COMMENTS: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REPLACE_NULLS: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case symbol_kind::S_ACTION_TRANSFORMATION_SHA1: // "ACTION_TRANSFORMATION_SHA1"
      case symbol_kind::S_ACTION_TRANSFORMATION_SQL_HEX_DECODE: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM: // "ACTION_TRANSFORMATION_TRIM"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM_LEFT: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM_RIGHT: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case symbol_kind::S_ACTION_TRANSFORMATION_UPPERCASE: // "ACTION_TRANSFORMATION_UPPERCASE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_ENCODE: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_DECODE: // "ACTION_TRANSFORMATION_URL_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_DECODE_UNI: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case symbol_kind::S_ACTION_TRANSFORMATION_UTF8_TO_UNICODE: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case symbol_kind::S_ACTION_VER: // "Ver"
      case symbol_kind::S_ACTION_XMLNS: // "xmlns"
      case symbol_kind::S_CONFIG_COMPONENT_SIG: // "CONFIG_COMPONENT_SIG"
      case symbol_kind::S_CONFIG_CONN_ENGINE: // "CONFIG_CONN_ENGINE"
      case symbol_kind::S_CONFIG_SEC_ARGUMENT_SEPARATOR: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case symbol_kind::S_CONFIG_SEC_WEB_APP_ID: // "CONFIG_SEC_WEB_APP_ID"
      case symbol_kind::S_CONFIG_SEC_SERVER_SIG: // "CONFIG_SEC_SERVER_SIG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_DIR: // "CONFIG_DIR_AUDIT_DIR"
      case symbol_kind::S_CONFIG_DIR_AUDIT_DIR_MOD: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case symbol_kind::S_CONFIG_DIR_AUDIT_ENG: // "CONFIG_DIR_AUDIT_ENG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_FLE_MOD: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG: // "CONFIG_DIR_AUDIT_LOG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG2: // "CONFIG_DIR_AUDIT_LOG2"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG_P: // "CONFIG_DIR_AUDIT_LOG_P"
      case symbol_kind::S_CONFIG_DIR_AUDIT_STS: // "CONFIG_DIR_AUDIT_STS"
      case symbol_kind::S_CONFIG_DIR_AUDIT_TPE: // "CONFIG_DIR_AUDIT_TPE"
      case symbol_kind::S_CONFIG_DIR_DEBUG_LOG: // "CONFIG_DIR_DEBUG_LOG"
      case symbol_kind::S_CONFIG_DIR_DEBUG_LVL: // "CONFIG_DIR_DEBUG_LVL"
      case symbol_kind::S_CONFIG_SEC_CACHE_TRANSFORMATIONS: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case symbol_kind::S_CONFIG_SEC_DISABLE_BACKEND_COMPRESS: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case symbol_kind::S_CONFIG_SEC_HASH_ENGINE: // "CONFIG_SEC_HASH_ENGINE"
      case symbol_kind::S_CONFIG_SEC_HASH_KEY: // "CONFIG_SEC_HASH_KEY"
      case symbol_kind::S_CONFIG_SEC_HASH_PARAM: // "CONFIG_SEC_HASH_PARAM"
      case symbol_kind::S_CONFIG_SEC_HASH_METHOD_RX: // "CONFIG_SEC_HASH_METHOD_RX"
      case symbol_kind::S_CONFIG_SEC_HASH_METHOD_PM: // "CONFIG_SEC_HASH_METHOD_PM"
      case symbol_kind::S_CONFIG_SEC_CHROOT_DIR: // "CONFIG_SEC_CHROOT_DIR"
      case symbol_kind::S_CONFIG_DIR_GEO_DB: // "CONFIG_DIR_GEO_DB"
      case symbol_kind::S_CONFIG_DIR_GSB_DB: // "CONFIG_DIR_GSB_DB"
      case symbol_kind::S_CONFIG_SEC_GUARDIAN_LOG: // "CONFIG_SEC_GUARDIAN_LOG"
      case symbol_kind::S_CONFIG_DIR_PCRE_MATCH_LIMIT: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case symbol_kind::S_CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case symbol_kind::S_CONFIG_SEC_CONN_R_STATE_LIMIT: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case symbol_kind::S_CONFIG_SEC_CONN_W_STATE_LIMIT: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case symbol_kind::S_CONFIG_SEC_SENSOR_ID: // "CONFIG_SEC_SENSOR_ID"
      case symbol_kind::S_CONFIG_DIR_ARGS_LIMIT: // "CONFIG_DIR_ARGS_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT: // "CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY: // "CONFIG_DIR_REQ_BODY"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_LIMIT: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_LIMIT_ACTION: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case symbol_kind::S_CONFIG_DIR_RES_BODY: // "CONFIG_DIR_RES_BODY"
      case symbol_kind::S_CONFIG_DIR_RES_BODY_LIMIT: // "CONFIG_DIR_RES_BODY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_RES_BODY_LIMIT_ACTION: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case symbol_kind::S_CONFIG_SEC_RULE_INHERITANCE: // "CONFIG_SEC_RULE_INHERITANCE"
      case symbol_kind::S_CONFIG_SEC_RULE_PERF_TIME: // "CONFIG_SEC_RULE_PERF_TIME"
      case symbol_kind::S_CONFIG_DIR_RULE_ENG: // "CONFIG_DIR_RULE_ENG"
      case symbol_kind::S_CONFIG_DIR_SEC_ACTION: // "CONFIG_DIR_SEC_ACTION"
      case symbol_kind::S_CONFIG_DIR_SEC_DEFAULT_ACTION: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case symbol_kind::S_CONFIG_DIR_SEC_MARKER: // "CONFIG_DIR_SEC_MARKER"
      case symbol_kind::S_CONFIG_DIR_UNICODE_MAP_FILE: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case symbol_kind::S_CONFIG_DIR_UNICODE_CODE_PAGE: // "CONFIG_DIR_UNICODE_CODE_PAGE"
      case symbol_kind::S_CONFIG_SEC_COLLECTION_TIMEOUT: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case symbol_kind::S_CONFIG_SEC_HTTP_BLKEY: // "CONFIG_SEC_HTTP_BLKEY"
      case symbol_kind::S_CONFIG_SEC_INTERCEPT_ON_ERROR: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case symbol_kind::S_CONFIG_SEC_REMOTE_RULES_FAIL_ACTION: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_ID: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_MSG: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_TAG: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case symbol_kind::S_CONFIG_UPDLOAD_KEEP_FILES: // "CONFIG_UPDLOAD_KEEP_FILES"
      case symbol_kind::S_CONFIG_UPDLOAD_SAVE_TMP_FILES: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case symbol_kind::S_CONFIG_UPLOAD_DIR: // "CONFIG_UPLOAD_DIR"
      case symbol_kind::S_CONFIG_UPLOAD_FILE_LIMIT: // "CONFIG_UPLOAD_FILE_LIMIT"
      case symbol_kind::S_CONFIG_UPLOAD_FILE_MODE: // "CONFIG_UPLOAD_FILE_MODE"
      case symbol_kind::S_CONFIG_VALUE_ABORT: // "CONFIG_VALUE_ABORT"
      case symbol_kind::S_CONFIG_VALUE_DETC: // "CONFIG_VALUE_DETC"
      case symbol_kind::S_CONFIG_VALUE_HTTPS: // "CONFIG_VALUE_HTTPS"
      case symbol_kind::S_CONFIG_VALUE_OFF: // "CONFIG_VALUE_OFF"
      case symbol_kind::S_CONFIG_VALUE_ON: // "CONFIG_VALUE_ON"
      case symbol_kind::S_CONFIG_VALUE_PARALLEL: // "CONFIG_VALUE_PARALLEL"
      case symbol_kind::S_CONFIG_VALUE_PROCESS_PARTIAL: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case symbol_kind::S_CONFIG_VALUE_REJECT: // "CONFIG_VALUE_REJECT"
      case symbol_kind::S_CONFIG_VALUE_RELEVANT_ONLY: // "CONFIG_VALUE_RELEVANT_ONLY"
      case symbol_kind::S_CONFIG_VALUE_SERIAL: // "CONFIG_VALUE_SERIAL"
      case symbol_kind::S_CONFIG_VALUE_WARN: // "CONFIG_VALUE_WARN"
      case symbol_kind::S_CONFIG_XML_EXTERNAL_ENTITY: // "CONFIG_XML_EXTERNAL_ENTITY"
      case symbol_kind::S_CONGIG_DIR_RESPONSE_BODY_MP: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case symbol_kind::S_CONGIG_DIR_SEC_ARG_SEP: // "CONGIG_DIR_SEC_ARG_SEP"
      case symbol_kind::S_CONGIG_DIR_SEC_COOKIE_FORMAT: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case symbol_kind::S_CONFIG_SEC_COOKIEV0_SEPARATOR: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case symbol_kind::S_CONGIG_DIR_SEC_DATA_DIR: // "CONGIG_DIR_SEC_DATA_DIR"
      case symbol_kind::S_CONGIG_DIR_SEC_STATUS_ENGINE: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case symbol_kind::S_CONFIG_SEC_STREAM_IN_BODY_INSPECTION: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case symbol_kind::S_CONFIG_SEC_STREAM_OUT_BODY_INSPECTION: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case symbol_kind::S_CONGIG_DIR_SEC_TMP_DIR: // "CONGIG_DIR_SEC_TMP_DIR"
      case symbol_kind::S_DIRECTIVE: // "DIRECTIVE"
      case symbol_kind::S_DIRECTIVE_SECRULESCRIPT: // "DIRECTIVE_SECRULESCRIPT"
      case symbol_kind::S_FREE_TEXT_QUOTE_MACRO_EXPANSION: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case symbol_kind::S_QUOTATION_MARK: // "QUOTATION_MARK"
      case symbol_kind::S_RUN_TIME_VAR_BLD: // "RUN_TIME_VAR_BLD"
      case symbol_kind::S_RUN_TIME_VAR_DUR: // "RUN_TIME_VAR_DUR"
      case symbol_kind::S_RUN_TIME_VAR_HSV: // "RUN_TIME_VAR_HSV"
      case symbol_kind::S_RUN_TIME_VAR_REMOTE_USER: // "RUN_TIME_VAR_REMOTE_USER"
      case symbol_kind::S_RUN_TIME_VAR_TIME: // "RUN_TIME_VAR_TIME"
      case symbol_kind::S_RUN_TIME_VAR_TIME_DAY: // "RUN_TIME_VAR_TIME_DAY"
      case symbol_kind::S_RUN_TIME_VAR_TIME_EPOCH: // "RUN_TIME_VAR_TIME_EPOCH"
      case symbol_kind::S_RUN_TIME_VAR_TIME_HOUR: // "RUN_TIME_VAR_TIME_HOUR"
      case symbol_kind::S_RUN_TIME_VAR_TIME_MIN: // "RUN_TIME_VAR_TIME_MIN"
      case symbol_kind::S_RUN_TIME_VAR_TIME_MON: // "RUN_TIME_VAR_TIME_MON"
      case symbol_kind::S_RUN_TIME_VAR_TIME_SEC: // "RUN_TIME_VAR_TIME_SEC"
      case symbol_kind::S_RUN_TIME_VAR_TIME_WDAY: // "RUN_TIME_VAR_TIME_WDAY"
      case symbol_kind::S_RUN_TIME_VAR_TIME_YEAR: // "RUN_TIME_VAR_TIME_YEAR"
      case symbol_kind::S_VARIABLE: // "VARIABLE"
      case symbol_kind::S_DICT_ELEMENT: // "Dictionary element"
      case symbol_kind::S_DICT_ELEMENT_WITH_EQUALS: // "Dictionary element, with equals"
      case symbol_kind::S_DICT_ELEMENT_REGEXP: // "Dictionary element, selected by regexp"
        value.copy< std::string > (that.value);
        break;

      case symbol_kind::S_op: // op
      case symbol_kind::S_op_before_init: // op_before_init
        value.copy< std::unique_ptr<Operator> > (that.value);
        break;

      case symbol_kind::S_run_time_string: // run_time_string
        value.copy< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case symbol_kind::S_var: // var
        value.copy< std::unique_ptr<Variable> > (that.value);
        break;

      case symbol_kind::S_act: // act
      case symbol_kind::S_setvar_action: // setvar_action
        value.copy< std::unique_ptr<actions::Action> > (that.value);
        break;

      case symbol_kind::S_variables: // variables
      case symbol_kind::S_variables_pre_process: // variables_pre_process
      case symbol_kind::S_variables_may_be_quoted: // variables_may_be_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case symbol_kind::S_actions: // actions
      case symbol_kind::S_actions_may_quoted: // actions_may_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  seclang_parser::stack_symbol_type&
  seclang_parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_ACTION_ACCURACY: // "Accuracy"
      case symbol_kind::S_ACTION_ALLOW: // "Allow"
      case symbol_kind::S_ACTION_APPEND: // "Append"
      case symbol_kind::S_ACTION_AUDIT_LOG: // "AuditLog"
      case symbol_kind::S_ACTION_BLOCK: // "Block"
      case symbol_kind::S_ACTION_CAPTURE: // "Capture"
      case symbol_kind::S_ACTION_CHAIN: // "Chain"
      case symbol_kind::S_ACTION_CTL_AUDIT_ENGINE: // "ACTION_CTL_AUDIT_ENGINE"
      case symbol_kind::S_ACTION_CTL_AUDIT_LOG_PARTS: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case symbol_kind::S_ACTION_CTL_BDY_JSON: // "ACTION_CTL_BDY_JSON"
      case symbol_kind::S_ACTION_CTL_BDY_XML: // "ACTION_CTL_BDY_XML"
      case symbol_kind::S_ACTION_CTL_BDY_URLENCODED: // "ACTION_CTL_BDY_URLENCODED"
      case symbol_kind::S_ACTION_CTL_FORCE_REQ_BODY_VAR: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case symbol_kind::S_ACTION_CTL_REQUEST_BODY_ACCESS: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_BY_ID: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_BY_TAG: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_TARGET_BY_ID: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case symbol_kind::S_ACTION_DENY: // "Deny"
      case symbol_kind::S_ACTION_DEPRECATE_VAR: // "DeprecateVar"
      case symbol_kind::S_ACTION_DROP: // "Drop"
      case symbol_kind::S_ACTION_EXEC: // "Exec"
      case symbol_kind::S_ACTION_EXPIRE_VAR: // "ExpireVar"
      case symbol_kind::S_ACTION_ID: // "Id"
      case symbol_kind::S_ACTION_INITCOL: // "InitCol"
      case symbol_kind::S_ACTION_LOG: // "Log"
      case symbol_kind::S_ACTION_LOG_DATA: // "LogData"
      case symbol_kind::S_ACTION_MATURITY: // "Maturity"
      case symbol_kind::S_ACTION_MSG: // "Msg"
      case symbol_kind::S_ACTION_MULTI_MATCH: // "MultiMatch"
      case symbol_kind::S_ACTION_NO_AUDIT_LOG: // "NoAuditLog"
      case symbol_kind::S_ACTION_NO_LOG: // "NoLog"
      case symbol_kind::S_ACTION_PASS: // "Pass"
      case symbol_kind::S_ACTION_PAUSE: // "Pause"
      case symbol_kind::S_ACTION_PHASE: // "Phase"
      case symbol_kind::S_ACTION_PREPEND: // "Prepend"
      case symbol_kind::S_ACTION_PROXY: // "Proxy"
      case symbol_kind::S_ACTION_REDIRECT: // "Redirect"
      case symbol_kind::S_ACTION_REV: // "Rev"
      case symbol_kind::S_ACTION_SANITISE_ARG: // "SanitiseArg"
      case symbol_kind::S_ACTION_SANITISE_MATCHED: // "SanitiseMatched"
      case symbol_kind::S_ACTION_SANITISE_MATCHED_BYTES: // "SanitiseMatchedBytes"
      case symbol_kind::S_ACTION_SANITISE_REQUEST_HEADER: // "SanitiseRequestHeader"
      case symbol_kind::S_ACTION_SANITISE_RESPONSE_HEADER: // "SanitiseResponseHeader"
      case symbol_kind::S_ACTION_SETENV: // "SetEnv"
      case symbol_kind::S_ACTION_SETRSC: // "SetRsc"
      case symbol_kind::S_ACTION_SETSID: // "SetSid"
      case symbol_kind::S_ACTION_SETUID: // "SetUID"
      case symbol_kind::S_ACTION_SEVERITY: // "Severity"
      case symbol_kind::S_ACTION_SKIP: // "Skip"
      case symbol_kind::S_ACTION_SKIP_AFTER: // "SkipAfter"
      case symbol_kind::S_ACTION_STATUS: // "Status"
      case symbol_kind::S_ACTION_TAG: // "Tag"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_ENCODE: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_DECODE: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_DECODE_EXT: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case symbol_kind::S_ACTION_TRANSFORMATION_CMD_LINE: // "ACTION_TRANSFORMATION_CMD_LINE"
      case symbol_kind::S_ACTION_TRANSFORMATION_COMPRESS_WHITESPACE: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case symbol_kind::S_ACTION_TRANSFORMATION_CSS_DECODE: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HEX_ENCODE: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HEX_DECODE: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HTML_ENTITY_DECODE: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_JS_DECODE: // "ACTION_TRANSFORMATION_JS_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_LENGTH: // "ACTION_TRANSFORMATION_LENGTH"
      case symbol_kind::S_ACTION_TRANSFORMATION_LOWERCASE: // "ACTION_TRANSFORMATION_LOWERCASE"
      case symbol_kind::S_ACTION_TRANSFORMATION_MD5: // "ACTION_TRANSFORMATION_MD5"
      case symbol_kind::S_ACTION_TRANSFORMATION_NONE: // "ACTION_TRANSFORMATION_NONE"
      case symbol_kind::S_ACTION_TRANSFORMATION_NORMALISE_PATH: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case symbol_kind::S_ACTION_TRANSFORMATION_NORMALISE_PATH_WIN: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_ODD_7_BIT: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_COMMENTS: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_NULLS: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_WHITESPACE: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case symbol_kind::S_ACTION_TRANSFORMATION_REPLACE_COMMENTS: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REPLACE_NULLS: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case symbol_kind::S_ACTION_TRANSFORMATION_SHA1: // "ACTION_TRANSFORMATION_SHA1"
      case symbol_kind::S_ACTION_TRANSFORMATION_SQL_HEX_DECODE: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM: // "ACTION_TRANSFORMATION_TRIM"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM_LEFT: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM_RIGHT: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case symbol_kind::S_ACTION_TRANSFORMATION_UPPERCASE: // "ACTION_TRANSFORMATION_UPPERCASE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_ENCODE: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_DECODE: // "ACTION_TRANSFORMATION_URL_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_DECODE_UNI: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case symbol_kind::S_ACTION_TRANSFORMATION_UTF8_TO_UNICODE: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case symbol_kind::S_ACTION_VER: // "Ver"
      case symbol_kind::S_ACTION_XMLNS: // "xmlns"
      case symbol_kind::S_CONFIG_COMPONENT_SIG: // "CONFIG_COMPONENT_SIG"
      case symbol_kind::S_CONFIG_CONN_ENGINE: // "CONFIG_CONN_ENGINE"
      case symbol_kind::S_CONFIG_SEC_ARGUMENT_SEPARATOR: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case symbol_kind::S_CONFIG_SEC_WEB_APP_ID: // "CONFIG_SEC_WEB_APP_ID"
      case symbol_kind::S_CONFIG_SEC_SERVER_SIG: // "CONFIG_SEC_SERVER_SIG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_DIR: // "CONFIG_DIR_AUDIT_DIR"
      case symbol_kind::S_CONFIG_DIR_AUDIT_DIR_MOD: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case symbol_kind::S_CONFIG_DIR_AUDIT_ENG: // "CONFIG_DIR_AUDIT_ENG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_FLE_MOD: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG: // "CONFIG_DIR_AUDIT_LOG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG2: // "CONFIG_DIR_AUDIT_LOG2"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG_P: // "CONFIG_DIR_AUDIT_LOG_P"
      case symbol_kind::S_CONFIG_DIR_AUDIT_STS: // "CONFIG_DIR_AUDIT_STS"
      case symbol_kind::S_CONFIG_DIR_AUDIT_TPE: // "CONFIG_DIR_AUDIT_TPE"
      case symbol_kind::S_CONFIG_DIR_DEBUG_LOG: // "CONFIG_DIR_DEBUG_LOG"
      case symbol_kind::S_CONFIG_DIR_DEBUG_LVL: // "CONFIG_DIR_DEBUG_LVL"
      case symbol_kind::S_CONFIG_SEC_CACHE_TRANSFORMATIONS: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case symbol_kind::S_CONFIG_SEC_DISABLE_BACKEND_COMPRESS: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case symbol_kind::S_CONFIG_SEC_HASH_ENGINE: // "CONFIG_SEC_HASH_ENGINE"
      case symbol_kind::S_CONFIG_SEC_HASH_KEY: // "CONFIG_SEC_HASH_KEY"
      case symbol_kind::S_CONFIG_SEC_HASH_PARAM: // "CONFIG_SEC_HASH_PARAM"
      case symbol_kind::S_CONFIG_SEC_HASH_METHOD_RX: // "CONFIG_SEC_HASH_METHOD_RX"
      case symbol_kind::S_CONFIG_SEC_HASH_METHOD_PM: // "CONFIG_SEC_HASH_METHOD_PM"
      case symbol_kind::S_CONFIG_SEC_CHROOT_DIR: // "CONFIG_SEC_CHROOT_DIR"
      case symbol_kind::S_CONFIG_DIR_GEO_DB: // "CONFIG_DIR_GEO_DB"
      case symbol_kind::S_CONFIG_DIR_GSB_DB: // "CONFIG_DIR_GSB_DB"
      case symbol_kind::S_CONFIG_SEC_GUARDIAN_LOG: // "CONFIG_SEC_GUARDIAN_LOG"
      case symbol_kind::S_CONFIG_DIR_PCRE_MATCH_LIMIT: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case symbol_kind::S_CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case symbol_kind::S_CONFIG_SEC_CONN_R_STATE_LIMIT: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case symbol_kind::S_CONFIG_SEC_CONN_W_STATE_LIMIT: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case symbol_kind::S_CONFIG_SEC_SENSOR_ID: // "CONFIG_SEC_SENSOR_ID"
      case symbol_kind::S_CONFIG_DIR_ARGS_LIMIT: // "CONFIG_DIR_ARGS_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT: // "CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY: // "CONFIG_DIR_REQ_BODY"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_LIMIT: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_LIMIT_ACTION: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case symbol_kind::S_CONFIG_DIR_RES_BODY: // "CONFIG_DIR_RES_BODY"
      case symbol_kind::S_CONFIG_DIR_RES_BODY_LIMIT: // "CONFIG_DIR_RES_BODY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_RES_BODY_LIMIT_ACTION: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case symbol_kind::S_CONFIG_SEC_RULE_INHERITANCE: // "CONFIG_SEC_RULE_INHERITANCE"
      case symbol_kind::S_CONFIG_SEC_RULE_PERF_TIME: // "CONFIG_SEC_RULE_PERF_TIME"
      case symbol_kind::S_CONFIG_DIR_RULE_ENG: // "CONFIG_DIR_RULE_ENG"
      case symbol_kind::S_CONFIG_DIR_SEC_ACTION: // "CONFIG_DIR_SEC_ACTION"
      case symbol_kind::S_CONFIG_DIR_SEC_DEFAULT_ACTION: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case symbol_kind::S_CONFIG_DIR_SEC_MARKER: // "CONFIG_DIR_SEC_MARKER"
      case symbol_kind::S_CONFIG_DIR_UNICODE_MAP_FILE: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case symbol_kind::S_CONFIG_DIR_UNICODE_CODE_PAGE: // "CONFIG_DIR_UNICODE_CODE_PAGE"
      case symbol_kind::S_CONFIG_SEC_COLLECTION_TIMEOUT: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case symbol_kind::S_CONFIG_SEC_HTTP_BLKEY: // "CONFIG_SEC_HTTP_BLKEY"
      case symbol_kind::S_CONFIG_SEC_INTERCEPT_ON_ERROR: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case symbol_kind::S_CONFIG_SEC_REMOTE_RULES_FAIL_ACTION: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_ID: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_MSG: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_TAG: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case symbol_kind::S_CONFIG_UPDLOAD_KEEP_FILES: // "CONFIG_UPDLOAD_KEEP_FILES"
      case symbol_kind::S_CONFIG_UPDLOAD_SAVE_TMP_FILES: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case symbol_kind::S_CONFIG_UPLOAD_DIR: // "CONFIG_UPLOAD_DIR"
      case symbol_kind::S_CONFIG_UPLOAD_FILE_LIMIT: // "CONFIG_UPLOAD_FILE_LIMIT"
      case symbol_kind::S_CONFIG_UPLOAD_FILE_MODE: // "CONFIG_UPLOAD_FILE_MODE"
      case symbol_kind::S_CONFIG_VALUE_ABORT: // "CONFIG_VALUE_ABORT"
      case symbol_kind::S_CONFIG_VALUE_DETC: // "CONFIG_VALUE_DETC"
      case symbol_kind::S_CONFIG_VALUE_HTTPS: // "CONFIG_VALUE_HTTPS"
      case symbol_kind::S_CONFIG_VALUE_OFF: // "CONFIG_VALUE_OFF"
      case symbol_kind::S_CONFIG_VALUE_ON: // "CONFIG_VALUE_ON"
      case symbol_kind::S_CONFIG_VALUE_PARALLEL: // "CONFIG_VALUE_PARALLEL"
      case symbol_kind::S_CONFIG_VALUE_PROCESS_PARTIAL: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case symbol_kind::S_CONFIG_VALUE_REJECT: // "CONFIG_VALUE_REJECT"
      case symbol_kind::S_CONFIG_VALUE_RELEVANT_ONLY: // "CONFIG_VALUE_RELEVANT_ONLY"
      case symbol_kind::S_CONFIG_VALUE_SERIAL: // "CONFIG_VALUE_SERIAL"
      case symbol_kind::S_CONFIG_VALUE_WARN: // "CONFIG_VALUE_WARN"
      case symbol_kind::S_CONFIG_XML_EXTERNAL_ENTITY: // "CONFIG_XML_EXTERNAL_ENTITY"
      case symbol_kind::S_CONGIG_DIR_RESPONSE_BODY_MP: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case symbol_kind::S_CONGIG_DIR_SEC_ARG_SEP: // "CONGIG_DIR_SEC_ARG_SEP"
      case symbol_kind::S_CONGIG_DIR_SEC_COOKIE_FORMAT: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case symbol_kind::S_CONFIG_SEC_COOKIEV0_SEPARATOR: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case symbol_kind::S_CONGIG_DIR_SEC_DATA_DIR: // "CONGIG_DIR_SEC_DATA_DIR"
      case symbol_kind::S_CONGIG_DIR_SEC_STATUS_ENGINE: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case symbol_kind::S_CONFIG_SEC_STREAM_IN_BODY_INSPECTION: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case symbol_kind::S_CONFIG_SEC_STREAM_OUT_BODY_INSPECTION: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case symbol_kind::S_CONGIG_DIR_SEC_TMP_DIR: // "CONGIG_DIR_SEC_TMP_DIR"
      case symbol_kind::S_DIRECTIVE: // "DIRECTIVE"
      case symbol_kind::S_DIRECTIVE_SECRULESCRIPT: // "DIRECTIVE_SECRULESCRIPT"
      case symbol_kind::S_FREE_TEXT_QUOTE_MACRO_EXPANSION: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case symbol_kind::S_QUOTATION_MARK: // "QUOTATION_MARK"
      case symbol_kind::S_RUN_TIME_VAR_BLD: // "RUN_TIME_VAR_BLD"
      case symbol_kind::S_RUN_TIME_VAR_DUR: // "RUN_TIME_VAR_DUR"
      case symbol_kind::S_RUN_TIME_VAR_HSV: // "RUN_TIME_VAR_HSV"
      case symbol_kind::S_RUN_TIME_VAR_REMOTE_USER: // "RUN_TIME_VAR_REMOTE_USER"
      case symbol_kind::S_RUN_TIME_VAR_TIME: // "RUN_TIME_VAR_TIME"
      case symbol_kind::S_RUN_TIME_VAR_TIME_DAY: // "RUN_TIME_VAR_TIME_DAY"
      case symbol_kind::S_RUN_TIME_VAR_TIME_EPOCH: // "RUN_TIME_VAR_TIME_EPOCH"
      case symbol_kind::S_RUN_TIME_VAR_TIME_HOUR: // "RUN_TIME_VAR_TIME_HOUR"
      case symbol_kind::S_RUN_TIME_VAR_TIME_MIN: // "RUN_TIME_VAR_TIME_MIN"
      case symbol_kind::S_RUN_TIME_VAR_TIME_MON: // "RUN_TIME_VAR_TIME_MON"
      case symbol_kind::S_RUN_TIME_VAR_TIME_SEC: // "RUN_TIME_VAR_TIME_SEC"
      case symbol_kind::S_RUN_TIME_VAR_TIME_WDAY: // "RUN_TIME_VAR_TIME_WDAY"
      case symbol_kind::S_RUN_TIME_VAR_TIME_YEAR: // "RUN_TIME_VAR_TIME_YEAR"
      case symbol_kind::S_VARIABLE: // "VARIABLE"
      case symbol_kind::S_DICT_ELEMENT: // "Dictionary element"
      case symbol_kind::S_DICT_ELEMENT_WITH_EQUALS: // "Dictionary element, with equals"
      case symbol_kind::S_DICT_ELEMENT_REGEXP: // "Dictionary element, selected by regexp"
        value.move< std::string > (that.value);
        break;

      case symbol_kind::S_op: // op
      case symbol_kind::S_op_before_init: // op_before_init
        value.move< std::unique_ptr<Operator> > (that.value);
        break;

      case symbol_kind::S_run_time_string: // run_time_string
        value.move< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case symbol_kind::S_var: // var
        value.move< std::unique_ptr<Variable> > (that.value);
        break;

      case symbol_kind::S_act: // act
      case symbol_kind::S_setvar_action: // setvar_action
        value.move< std::unique_ptr<actions::Action> > (that.value);
        break;

      case symbol_kind::S_variables: // variables
      case symbol_kind::S_variables_pre_process: // variables_pre_process
      case symbol_kind::S_variables_may_be_quoted: // variables_may_be_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case symbol_kind::S_actions: // actions
      case symbol_kind::S_actions_may_quoted: // actions_may_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  seclang_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  seclang_parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  seclang_parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  seclang_parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  seclang_parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  seclang_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  seclang_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  seclang_parser::debug_level_type
  seclang_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  seclang_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  seclang_parser::state_type
  seclang_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  seclang_parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  seclang_parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  seclang_parser::operator() ()
  {
    return parse ();
  }

  int
  seclang_parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    // User initialization code.
#line 323 "seclang-parser.yy"
{
  // Initialize the initial location.
  driver.m_filenames.push_back(driver.file);
  yyla.location.begin.filename = yyla.location.end.filename = &(driver.m_filenames.back());
}

#line 1333 "seclang-parser.cc"


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_ACTION_ACCURACY: // "Accuracy"
      case symbol_kind::S_ACTION_ALLOW: // "Allow"
      case symbol_kind::S_ACTION_APPEND: // "Append"
      case symbol_kind::S_ACTION_AUDIT_LOG: // "AuditLog"
      case symbol_kind::S_ACTION_BLOCK: // "Block"
      case symbol_kind::S_ACTION_CAPTURE: // "Capture"
      case symbol_kind::S_ACTION_CHAIN: // "Chain"
      case symbol_kind::S_ACTION_CTL_AUDIT_ENGINE: // "ACTION_CTL_AUDIT_ENGINE"
      case symbol_kind::S_ACTION_CTL_AUDIT_LOG_PARTS: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case symbol_kind::S_ACTION_CTL_BDY_JSON: // "ACTION_CTL_BDY_JSON"
      case symbol_kind::S_ACTION_CTL_BDY_XML: // "ACTION_CTL_BDY_XML"
      case symbol_kind::S_ACTION_CTL_BDY_URLENCODED: // "ACTION_CTL_BDY_URLENCODED"
      case symbol_kind::S_ACTION_CTL_FORCE_REQ_BODY_VAR: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case symbol_kind::S_ACTION_CTL_REQUEST_BODY_ACCESS: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_BY_ID: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_BY_TAG: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_TARGET_BY_ID: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case symbol_kind::S_ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case symbol_kind::S_ACTION_DENY: // "Deny"
      case symbol_kind::S_ACTION_DEPRECATE_VAR: // "DeprecateVar"
      case symbol_kind::S_ACTION_DROP: // "Drop"
      case symbol_kind::S_ACTION_EXEC: // "Exec"
      case symbol_kind::S_ACTION_EXPIRE_VAR: // "ExpireVar"
      case symbol_kind::S_ACTION_ID: // "Id"
      case symbol_kind::S_ACTION_INITCOL: // "InitCol"
      case symbol_kind::S_ACTION_LOG: // "Log"
      case symbol_kind::S_ACTION_LOG_DATA: // "LogData"
      case symbol_kind::S_ACTION_MATURITY: // "Maturity"
      case symbol_kind::S_ACTION_MSG: // "Msg"
      case symbol_kind::S_ACTION_MULTI_MATCH: // "MultiMatch"
      case symbol_kind::S_ACTION_NO_AUDIT_LOG: // "NoAuditLog"
      case symbol_kind::S_ACTION_NO_LOG: // "NoLog"
      case symbol_kind::S_ACTION_PASS: // "Pass"
      case symbol_kind::S_ACTION_PAUSE: // "Pause"
      case symbol_kind::S_ACTION_PHASE: // "Phase"
      case symbol_kind::S_ACTION_PREPEND: // "Prepend"
      case symbol_kind::S_ACTION_PROXY: // "Proxy"
      case symbol_kind::S_ACTION_REDIRECT: // "Redirect"
      case symbol_kind::S_ACTION_REV: // "Rev"
      case symbol_kind::S_ACTION_SANITISE_ARG: // "SanitiseArg"
      case symbol_kind::S_ACTION_SANITISE_MATCHED: // "SanitiseMatched"
      case symbol_kind::S_ACTION_SANITISE_MATCHED_BYTES: // "SanitiseMatchedBytes"
      case symbol_kind::S_ACTION_SANITISE_REQUEST_HEADER: // "SanitiseRequestHeader"
      case symbol_kind::S_ACTION_SANITISE_RESPONSE_HEADER: // "SanitiseResponseHeader"
      case symbol_kind::S_ACTION_SETENV: // "SetEnv"
      case symbol_kind::S_ACTION_SETRSC: // "SetRsc"
      case symbol_kind::S_ACTION_SETSID: // "SetSid"
      case symbol_kind::S_ACTION_SETUID: // "SetUID"
      case symbol_kind::S_ACTION_SEVERITY: // "Severity"
      case symbol_kind::S_ACTION_SKIP: // "Skip"
      case symbol_kind::S_ACTION_SKIP_AFTER: // "SkipAfter"
      case symbol_kind::S_ACTION_STATUS: // "Status"
      case symbol_kind::S_ACTION_TAG: // "Tag"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_ENCODE: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_DECODE: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_BASE_64_DECODE_EXT: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case symbol_kind::S_ACTION_TRANSFORMATION_CMD_LINE: // "ACTION_TRANSFORMATION_CMD_LINE"
      case symbol_kind::S_ACTION_TRANSFORMATION_COMPRESS_WHITESPACE: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case symbol_kind::S_ACTION_TRANSFORMATION_CSS_DECODE: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HEX_ENCODE: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HEX_DECODE: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_HTML_ENTITY_DECODE: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_JS_DECODE: // "ACTION_TRANSFORMATION_JS_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_LENGTH: // "ACTION_TRANSFORMATION_LENGTH"
      case symbol_kind::S_ACTION_TRANSFORMATION_LOWERCASE: // "ACTION_TRANSFORMATION_LOWERCASE"
      case symbol_kind::S_ACTION_TRANSFORMATION_MD5: // "ACTION_TRANSFORMATION_MD5"
      case symbol_kind::S_ACTION_TRANSFORMATION_NONE: // "ACTION_TRANSFORMATION_NONE"
      case symbol_kind::S_ACTION_TRANSFORMATION_NORMALISE_PATH: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case symbol_kind::S_ACTION_TRANSFORMATION_NORMALISE_PATH_WIN: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_ODD_7_BIT: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_COMMENTS: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_NULLS: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REMOVE_WHITESPACE: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case symbol_kind::S_ACTION_TRANSFORMATION_REPLACE_COMMENTS: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case symbol_kind::S_ACTION_TRANSFORMATION_REPLACE_NULLS: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case symbol_kind::S_ACTION_TRANSFORMATION_SHA1: // "ACTION_TRANSFORMATION_SHA1"
      case symbol_kind::S_ACTION_TRANSFORMATION_SQL_HEX_DECODE: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM: // "ACTION_TRANSFORMATION_TRIM"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM_LEFT: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case symbol_kind::S_ACTION_TRANSFORMATION_TRIM_RIGHT: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case symbol_kind::S_ACTION_TRANSFORMATION_UPPERCASE: // "ACTION_TRANSFORMATION_UPPERCASE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_ENCODE: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_DECODE: // "ACTION_TRANSFORMATION_URL_DECODE"
      case symbol_kind::S_ACTION_TRANSFORMATION_URL_DECODE_UNI: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case symbol_kind::S_ACTION_TRANSFORMATION_UTF8_TO_UNICODE: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case symbol_kind::S_ACTION_VER: // "Ver"
      case symbol_kind::S_ACTION_XMLNS: // "xmlns"
      case symbol_kind::S_CONFIG_COMPONENT_SIG: // "CONFIG_COMPONENT_SIG"
      case symbol_kind::S_CONFIG_CONN_ENGINE: // "CONFIG_CONN_ENGINE"
      case symbol_kind::S_CONFIG_SEC_ARGUMENT_SEPARATOR: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case symbol_kind::S_CONFIG_SEC_WEB_APP_ID: // "CONFIG_SEC_WEB_APP_ID"
      case symbol_kind::S_CONFIG_SEC_SERVER_SIG: // "CONFIG_SEC_SERVER_SIG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_DIR: // "CONFIG_DIR_AUDIT_DIR"
      case symbol_kind::S_CONFIG_DIR_AUDIT_DIR_MOD: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case symbol_kind::S_CONFIG_DIR_AUDIT_ENG: // "CONFIG_DIR_AUDIT_ENG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_FLE_MOD: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG: // "CONFIG_DIR_AUDIT_LOG"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG2: // "CONFIG_DIR_AUDIT_LOG2"
      case symbol_kind::S_CONFIG_DIR_AUDIT_LOG_P: // "CONFIG_DIR_AUDIT_LOG_P"
      case symbol_kind::S_CONFIG_DIR_AUDIT_STS: // "CONFIG_DIR_AUDIT_STS"
      case symbol_kind::S_CONFIG_DIR_AUDIT_TPE: // "CONFIG_DIR_AUDIT_TPE"
      case symbol_kind::S_CONFIG_DIR_DEBUG_LOG: // "CONFIG_DIR_DEBUG_LOG"
      case symbol_kind::S_CONFIG_DIR_DEBUG_LVL: // "CONFIG_DIR_DEBUG_LVL"
      case symbol_kind::S_CONFIG_SEC_CACHE_TRANSFORMATIONS: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case symbol_kind::S_CONFIG_SEC_DISABLE_BACKEND_COMPRESS: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case symbol_kind::S_CONFIG_SEC_HASH_ENGINE: // "CONFIG_SEC_HASH_ENGINE"
      case symbol_kind::S_CONFIG_SEC_HASH_KEY: // "CONFIG_SEC_HASH_KEY"
      case symbol_kind::S_CONFIG_SEC_HASH_PARAM: // "CONFIG_SEC_HASH_PARAM"
      case symbol_kind::S_CONFIG_SEC_HASH_METHOD_RX: // "CONFIG_SEC_HASH_METHOD_RX"
      case symbol_kind::S_CONFIG_SEC_HASH_METHOD_PM: // "CONFIG_SEC_HASH_METHOD_PM"
      case symbol_kind::S_CONFIG_SEC_CHROOT_DIR: // "CONFIG_SEC_CHROOT_DIR"
      case symbol_kind::S_CONFIG_DIR_GEO_DB: // "CONFIG_DIR_GEO_DB"
      case symbol_kind::S_CONFIG_DIR_GSB_DB: // "CONFIG_DIR_GSB_DB"
      case symbol_kind::S_CONFIG_SEC_GUARDIAN_LOG: // "CONFIG_SEC_GUARDIAN_LOG"
      case symbol_kind::S_CONFIG_DIR_PCRE_MATCH_LIMIT: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case symbol_kind::S_CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case symbol_kind::S_CONFIG_SEC_CONN_R_STATE_LIMIT: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case symbol_kind::S_CONFIG_SEC_CONN_W_STATE_LIMIT: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case symbol_kind::S_CONFIG_SEC_SENSOR_ID: // "CONFIG_SEC_SENSOR_ID"
      case symbol_kind::S_CONFIG_DIR_ARGS_LIMIT: // "CONFIG_DIR_ARGS_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT: // "CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY: // "CONFIG_DIR_REQ_BODY"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_LIMIT: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_LIMIT_ACTION: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case symbol_kind::S_CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case symbol_kind::S_CONFIG_DIR_RES_BODY: // "CONFIG_DIR_RES_BODY"
      case symbol_kind::S_CONFIG_DIR_RES_BODY_LIMIT: // "CONFIG_DIR_RES_BODY_LIMIT"
      case symbol_kind::S_CONFIG_DIR_RES_BODY_LIMIT_ACTION: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case symbol_kind::S_CONFIG_SEC_RULE_INHERITANCE: // "CONFIG_SEC_RULE_INHERITANCE"
      case symbol_kind::S_CONFIG_SEC_RULE_PERF_TIME: // "CONFIG_SEC_RULE_PERF_TIME"
      case symbol_kind::S_CONFIG_DIR_RULE_ENG: // "CONFIG_DIR_RULE_ENG"
      case symbol_kind::S_CONFIG_DIR_SEC_ACTION: // "CONFIG_DIR_SEC_ACTION"
      case symbol_kind::S_CONFIG_DIR_SEC_DEFAULT_ACTION: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case symbol_kind::S_CONFIG_DIR_SEC_MARKER: // "CONFIG_DIR_SEC_MARKER"
      case symbol_kind::S_CONFIG_DIR_UNICODE_MAP_FILE: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case symbol_kind::S_CONFIG_DIR_UNICODE_CODE_PAGE: // "CONFIG_DIR_UNICODE_CODE_PAGE"
      case symbol_kind::S_CONFIG_SEC_COLLECTION_TIMEOUT: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case symbol_kind::S_CONFIG_SEC_HTTP_BLKEY: // "CONFIG_SEC_HTTP_BLKEY"
      case symbol_kind::S_CONFIG_SEC_INTERCEPT_ON_ERROR: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case symbol_kind::S_CONFIG_SEC_REMOTE_RULES_FAIL_ACTION: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_ID: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_MSG: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case symbol_kind::S_CONFIG_SEC_RULE_REMOVE_BY_TAG: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case symbol_kind::S_CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case symbol_kind::S_CONFIG_UPDLOAD_KEEP_FILES: // "CONFIG_UPDLOAD_KEEP_FILES"
      case symbol_kind::S_CONFIG_UPDLOAD_SAVE_TMP_FILES: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case symbol_kind::S_CONFIG_UPLOAD_DIR: // "CONFIG_UPLOAD_DIR"
      case symbol_kind::S_CONFIG_UPLOAD_FILE_LIMIT: // "CONFIG_UPLOAD_FILE_LIMIT"
      case symbol_kind::S_CONFIG_UPLOAD_FILE_MODE: // "CONFIG_UPLOAD_FILE_MODE"
      case symbol_kind::S_CONFIG_VALUE_ABORT: // "CONFIG_VALUE_ABORT"
      case symbol_kind::S_CONFIG_VALUE_DETC: // "CONFIG_VALUE_DETC"
      case symbol_kind::S_CONFIG_VALUE_HTTPS: // "CONFIG_VALUE_HTTPS"
      case symbol_kind::S_CONFIG_VALUE_OFF: // "CONFIG_VALUE_OFF"
      case symbol_kind::S_CONFIG_VALUE_ON: // "CONFIG_VALUE_ON"
      case symbol_kind::S_CONFIG_VALUE_PARALLEL: // "CONFIG_VALUE_PARALLEL"
      case symbol_kind::S_CONFIG_VALUE_PROCESS_PARTIAL: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case symbol_kind::S_CONFIG_VALUE_REJECT: // "CONFIG_VALUE_REJECT"
      case symbol_kind::S_CONFIG_VALUE_RELEVANT_ONLY: // "CONFIG_VALUE_RELEVANT_ONLY"
      case symbol_kind::S_CONFIG_VALUE_SERIAL: // "CONFIG_VALUE_SERIAL"
      case symbol_kind::S_CONFIG_VALUE_WARN: // "CONFIG_VALUE_WARN"
      case symbol_kind::S_CONFIG_XML_EXTERNAL_ENTITY: // "CONFIG_XML_EXTERNAL_ENTITY"
      case symbol_kind::S_CONGIG_DIR_RESPONSE_BODY_MP: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case symbol_kind::S_CONGIG_DIR_SEC_ARG_SEP: // "CONGIG_DIR_SEC_ARG_SEP"
      case symbol_kind::S_CONGIG_DIR_SEC_COOKIE_FORMAT: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case symbol_kind::S_CONFIG_SEC_COOKIEV0_SEPARATOR: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case symbol_kind::S_CONGIG_DIR_SEC_DATA_DIR: // "CONGIG_DIR_SEC_DATA_DIR"
      case symbol_kind::S_CONGIG_DIR_SEC_STATUS_ENGINE: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case symbol_kind::S_CONFIG_SEC_STREAM_IN_BODY_INSPECTION: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case symbol_kind::S_CONFIG_SEC_STREAM_OUT_BODY_INSPECTION: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case symbol_kind::S_CONGIG_DIR_SEC_TMP_DIR: // "CONGIG_DIR_SEC_TMP_DIR"
      case symbol_kind::S_DIRECTIVE: // "DIRECTIVE"
      case symbol_kind::S_DIRECTIVE_SECRULESCRIPT: // "DIRECTIVE_SECRULESCRIPT"
      case symbol_kind::S_FREE_TEXT_QUOTE_MACRO_EXPANSION: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case symbol_kind::S_QUOTATION_MARK: // "QUOTATION_MARK"
      case symbol_kind::S_RUN_TIME_VAR_BLD: // "RUN_TIME_VAR_BLD"
      case symbol_kind::S_RUN_TIME_VAR_DUR: // "RUN_TIME_VAR_DUR"
      case symbol_kind::S_RUN_TIME_VAR_HSV: // "RUN_TIME_VAR_HSV"
      case symbol_kind::S_RUN_TIME_VAR_REMOTE_USER: // "RUN_TIME_VAR_REMOTE_USER"
      case symbol_kind::S_RUN_TIME_VAR_TIME: // "RUN_TIME_VAR_TIME"
      case symbol_kind::S_RUN_TIME_VAR_TIME_DAY: // "RUN_TIME_VAR_TIME_DAY"
      case symbol_kind::S_RUN_TIME_VAR_TIME_EPOCH: // "RUN_TIME_VAR_TIME_EPOCH"
      case symbol_kind::S_RUN_TIME_VAR_TIME_HOUR: // "RUN_TIME_VAR_TIME_HOUR"
      case symbol_kind::S_RUN_TIME_VAR_TIME_MIN: // "RUN_TIME_VAR_TIME_MIN"
      case symbol_kind::S_RUN_TIME_VAR_TIME_MON: // "RUN_TIME_VAR_TIME_MON"
      case symbol_kind::S_RUN_TIME_VAR_TIME_SEC: // "RUN_TIME_VAR_TIME_SEC"
      case symbol_kind::S_RUN_TIME_VAR_TIME_WDAY: // "RUN_TIME_VAR_TIME_WDAY"
      case symbol_kind::S_RUN_TIME_VAR_TIME_YEAR: // "RUN_TIME_VAR_TIME_YEAR"
      case symbol_kind::S_VARIABLE: // "VARIABLE"
      case symbol_kind::S_DICT_ELEMENT: // "Dictionary element"
      case symbol_kind::S_DICT_ELEMENT_WITH_EQUALS: // "Dictionary element, with equals"
      case symbol_kind::S_DICT_ELEMENT_REGEXP: // "Dictionary element, selected by regexp"
        yylhs.value.emplace< std::string > ();
        break;

      case symbol_kind::S_op: // op
      case symbol_kind::S_op_before_init: // op_before_init
        yylhs.value.emplace< std::unique_ptr<Operator> > ();
        break;

      case symbol_kind::S_run_time_string: // run_time_string
        yylhs.value.emplace< std::unique_ptr<RunTimeString> > ();
        break;

      case symbol_kind::S_var: // var
        yylhs.value.emplace< std::unique_ptr<Variable> > ();
        break;

      case symbol_kind::S_act: // act
      case symbol_kind::S_setvar_action: // setvar_action
        yylhs.value.emplace< std::unique_ptr<actions::Action> > ();
        break;

      case symbol_kind::S_variables: // variables
      case symbol_kind::S_variables_pre_process: // variables_pre_process
      case symbol_kind::S_variables_may_be_quoted: // variables_may_be_quoted
        yylhs.value.emplace< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ();
        break;

      case symbol_kind::S_actions: // actions
      case symbol_kind::S_actions_may_quoted: // actions_may_quoted
        yylhs.value.emplace< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // input: "end of file"
#line 722 "seclang-parser.yy"
      {
        return 0;
      }
#line 1704 "seclang-parser.cc"
    break;

  case 6: // audit_log: "CONFIG_DIR_AUDIT_DIR_MOD"
#line 735 "seclang-parser.yy"
      {
        driver.m_auditLog->setStorageDirMode(strtol(yystack_[0].value.as < std::string > ().c_str(), NULL, 8));
      }
#line 1712 "seclang-parser.cc"
    break;

  case 7: // audit_log: "CONFIG_DIR_AUDIT_DIR"
#line 741 "seclang-parser.yy"
      {
        driver.m_auditLog->setStorageDir(yystack_[0].value.as < std::string > ());
      }
#line 1720 "seclang-parser.cc"
    break;

  case 8: // audit_log: "CONFIG_DIR_AUDIT_ENG" "CONFIG_VALUE_RELEVANT_ONLY"
#line 747 "seclang-parser.yy"
      {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::RelevantOnlyAuditLogStatus);
      }
#line 1728 "seclang-parser.cc"
    break;

  case 9: // audit_log: "CONFIG_DIR_AUDIT_ENG" "CONFIG_VALUE_OFF"
#line 751 "seclang-parser.yy"
      {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::OffAuditLogStatus);
      }
#line 1736 "seclang-parser.cc"
    break;

  case 10: // audit_log: "CONFIG_DIR_AUDIT_ENG" "CONFIG_VALUE_ON"
#line 755 "seclang-parser.yy"
      {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::OnAuditLogStatus);
      }
#line 1744 "seclang-parser.cc"
    break;

  case 11: // audit_log: "CONFIG_DIR_AUDIT_FLE_MOD"
#line 761 "seclang-parser.yy"
      {
        driver.m_auditLog->setFileMode(strtol(yystack_[0].value.as < std::string > ().c_str(), NULL, 8));
      }
#line 1752 "seclang-parser.cc"
    break;

  case 12: // audit_log: "CONFIG_DIR_AUDIT_LOG2"
#line 767 "seclang-parser.yy"
      {
        driver.m_auditLog->setFilePath2(yystack_[0].value.as < std::string > ());
      }
#line 1760 "seclang-parser.cc"
    break;

  case 13: // audit_log: "CONFIG_DIR_AUDIT_LOG_P"
#line 773 "seclang-parser.yy"
      {
        driver.m_auditLog->setParts(yystack_[0].value.as < std::string > ());
      }
#line 1768 "seclang-parser.cc"
    break;

  case 14: // audit_log: "CONFIG_DIR_AUDIT_LOG"
#line 779 "seclang-parser.yy"
      {
        driver.m_auditLog->setFilePath1(yystack_[0].value.as < std::string > ());
      }
#line 1776 "seclang-parser.cc"
    break;

  case 15: // audit_log: CONFIG_DIR_AUDIT_LOG_FMT JSON
#line 784 "seclang-parser.yy"
      {
        driver.m_auditLog->setFormat(modsecurity::audit_log::AuditLog::JSONAuditLogFormat);
      }
#line 1784 "seclang-parser.cc"
    break;

  case 16: // audit_log: CONFIG_DIR_AUDIT_LOG_FMT NATIVE
#line 789 "seclang-parser.yy"
      {
        driver.m_auditLog->setFormat(modsecurity::audit_log::AuditLog::NativeAuditLogFormat);
      }
#line 1792 "seclang-parser.cc"
    break;

  case 17: // audit_log: "CONFIG_DIR_AUDIT_STS"
#line 795 "seclang-parser.yy"
      {
        std::string relevant_status(yystack_[0].value.as < std::string > ());
        driver.m_auditLog->setRelevantStatus(relevant_status);
      }
#line 1801 "seclang-parser.cc"
    break;

  case 18: // audit_log: "CONFIG_DIR_AUDIT_TPE" "CONFIG_VALUE_SERIAL"
#line 802 "seclang-parser.yy"
      {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::SerialAuditLogType);
      }
#line 1809 "seclang-parser.cc"
    break;

  case 19: // audit_log: "CONFIG_DIR_AUDIT_TPE" "CONFIG_VALUE_PARALLEL"
#line 806 "seclang-parser.yy"
      {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::ParallelAuditLogType);
      }
#line 1817 "seclang-parser.cc"
    break;

  case 20: // audit_log: "CONFIG_DIR_AUDIT_TPE" "CONFIG_VALUE_HTTPS"
#line 810 "seclang-parser.yy"
      {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::HttpsAuditLogType);
      }
#line 1825 "seclang-parser.cc"
    break;

  case 21: // audit_log: "CONFIG_UPDLOAD_KEEP_FILES" "CONFIG_VALUE_ON"
#line 816 "seclang-parser.yy"
      {
        driver.m_uploadKeepFiles = modsecurity::RulesSetProperties::TrueConfigBoolean;
      }
#line 1833 "seclang-parser.cc"
    break;

  case 22: // audit_log: "CONFIG_UPDLOAD_KEEP_FILES" "CONFIG_VALUE_OFF"
#line 820 "seclang-parser.yy"
      {
        driver.m_uploadKeepFiles = modsecurity::RulesSetProperties::FalseConfigBoolean;
      }
#line 1841 "seclang-parser.cc"
    break;

  case 23: // audit_log: "CONFIG_UPDLOAD_KEEP_FILES" "CONFIG_VALUE_RELEVANT_ONLY"
#line 824 "seclang-parser.yy"
      {
        driver.error(yystack_[2].location, "SecUploadKeepFiles RelevantOnly is not currently supported. Accepted values are On or Off");
        YYERROR;
      }
#line 1850 "seclang-parser.cc"
    break;

  case 24: // audit_log: "CONFIG_UPLOAD_FILE_LIMIT"
#line 829 "seclang-parser.yy"
      {
        driver.m_uploadFileLimit.m_set = true;
        driver.m_uploadFileLimit.m_value = strtol(yystack_[0].value.as < std::string > ().c_str(), NULL, 10);
      }
#line 1859 "seclang-parser.cc"
    break;

  case 25: // audit_log: "CONFIG_UPLOAD_FILE_MODE"
#line 834 "seclang-parser.yy"
      {
        driver.m_uploadFileMode.m_set = true;
        driver.m_uploadFileMode.m_value = strtol(yystack_[0].value.as < std::string > ().c_str(), NULL, 8);
      }
#line 1868 "seclang-parser.cc"
    break;

  case 26: // audit_log: "CONFIG_UPLOAD_DIR"
#line 839 "seclang-parser.yy"
      {
        driver.m_uploadDirectory.m_set = true;
        driver.m_uploadDirectory.m_value = yystack_[0].value.as < std::string > ();
      }
#line 1877 "seclang-parser.cc"
    break;

  case 27: // audit_log: "CONFIG_UPDLOAD_SAVE_TMP_FILES" "CONFIG_VALUE_ON"
#line 844 "seclang-parser.yy"
      {
        driver.m_tmpSaveUploadedFiles = modsecurity::RulesSetProperties::TrueConfigBoolean;
      }
#line 1885 "seclang-parser.cc"
    break;

  case 28: // audit_log: "CONFIG_UPDLOAD_SAVE_TMP_FILES" "CONFIG_VALUE_OFF"
#line 848 "seclang-parser.yy"
      {
        driver.m_tmpSaveUploadedFiles = modsecurity::RulesSetProperties::FalseConfigBoolean;
      }
#line 1893 "seclang-parser.cc"
    break;

  case 29: // actions: "QUOTATION_MARK" actions_may_quoted "QUOTATION_MARK"
#line 855 "seclang-parser.yy"
      {
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[1].value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1901 "seclang-parser.cc"
    break;

  case 30: // actions: actions_may_quoted
#line 859 "seclang-parser.yy"
      {
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[0].value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1909 "seclang-parser.cc"
    break;

  case 31: // actions_may_quoted: actions_may_quoted "," act
#line 866 "seclang-parser.yy"
      {
        ACTION_INIT(yystack_[0].value.as < std::unique_ptr<actions::Action> > (), yystack_[3].location)
        yystack_[2].value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ()->push_back(std::move(yystack_[0].value.as < std::unique_ptr<actions::Action> > ()));
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[2].value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1919 "seclang-parser.cc"
    break;

  case 32: // actions_may_quoted: act
#line 872 "seclang-parser.yy"
      {
        std::unique_ptr<std::vector<std::unique_ptr<actions::Action>>> b(new std::vector<std::unique_ptr<actions::Action>>());
        ACTION_INIT(yystack_[0].value.as < std::unique_ptr<actions::Action> > (), yystack_[1].location)
        b->push_back(std::move(yystack_[0].value.as < std::unique_ptr<actions::Action> > ()));
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(b);
      }
#line 1930 "seclang-parser.cc"
    break;

  case 33: // op: op_before_init
#line 882 "seclang-parser.yy"
      {
        yylhs.value.as < std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as < std::unique_ptr<Operator> > ());
        std::string error;
        if (yylhs.value.as < std::unique_ptr<Operator> > ()->init(*yystack_[0].location.end.filename, &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1943 "seclang-parser.cc"
    break;

  case 34: // op: "NOT" op_before_init
#line 891 "seclang-parser.yy"
      {
        yylhs.value.as < std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as < std::unique_ptr<Operator> > ());
        yylhs.value.as < std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as < std::unique_ptr<Operator> > ()->init(*yystack_[1].location.end.filename, &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1957 "seclang-parser.cc"
    break;

  case 35: // op: run_time_string
#line 901 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
        std::string error;
        if (yylhs.value.as < std::unique_ptr<Operator> > ()->init(*yystack_[0].location.end.filename, &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1970 "seclang-parser.cc"
    break;

  case 36: // op: "NOT" run_time_string
#line 910 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
        yylhs.value.as < std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as < std::unique_ptr<Operator> > ()->init(*yystack_[1].location.end.filename, &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1984 "seclang-parser.cc"
    break;

  case 37: // op_before_init: "OPERATOR_UNCONDITIONAL_MATCH"
#line 923 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::UnconditionalMatch());
      }
#line 1992 "seclang-parser.cc"
    break;

  case 38: // op_before_init: "OPERATOR_DETECT_SQLI"
#line 927 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::DetectSQLi());
      }
#line 2000 "seclang-parser.cc"
    break;

  case 39: // op_before_init: "OPERATOR_DETECT_XSS"
#line 931 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::DetectXSS());
      }
#line 2008 "seclang-parser.cc"
    break;

  case 40: // op_before_init: "OPERATOR_VALIDATE_URL_ENCODING"
#line 935 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::ValidateUrlEncoding());
      }
#line 2016 "seclang-parser.cc"
    break;

  case 41: // op_before_init: "OPERATOR_VALIDATE_UTF8_ENCODING"
#line 939 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::ValidateUtf8Encoding());
      }
#line 2024 "seclang-parser.cc"
    break;

  case 42: // op_before_init: "OPERATOR_INSPECT_FILE" run_time_string
#line 943 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::InspectFile(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2032 "seclang-parser.cc"
    break;

  case 43: // op_before_init: "OPERATOR_FUZZY_HASH" run_time_string
#line 947 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::FuzzyHash(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2040 "seclang-parser.cc"
    break;

  case 44: // op_before_init: "OPERATOR_VALIDATE_BYTE_RANGE" run_time_string
#line 951 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::ValidateByteRange(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2048 "seclang-parser.cc"
    break;

  case 45: // op_before_init: "OPERATOR_VALIDATE_DTD" run_time_string
#line 955 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::ValidateDTD(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2056 "seclang-parser.cc"
    break;

  case 46: // op_before_init: "OPERATOR_VALIDATE_HASH" run_time_string
#line 959 "seclang-parser.yy"
      {
        /* $$ = new operators::ValidateHash($1); */
        OPERATOR_NOT_SUPPORTED("ValidateHash", yystack_[2].location);
      }
#line 2065 "seclang-parser.cc"
    break;

  case 47: // op_before_init: "OPERATOR_VALIDATE_SCHEMA" run_time_string
#line 964 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::ValidateSchema(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2073 "seclang-parser.cc"
    break;

  case 48: // op_before_init: "OPERATOR_VERIFY_CC" run_time_string
#line 968 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::VerifyCC(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2081 "seclang-parser.cc"
    break;

  case 49: // op_before_init: "OPERATOR_VERIFY_CPF" run_time_string
#line 972 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::VerifyCPF(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2089 "seclang-parser.cc"
    break;

  case 50: // op_before_init: "OPERATOR_VERIFY_SSN" run_time_string
#line 976 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::VerifySSN(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2097 "seclang-parser.cc"
    break;

  case 51: // op_before_init: "OPERATOR_VERIFY_SVNR" run_time_string
#line 980 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::VerifySVNR(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2105 "seclang-parser.cc"
    break;

  case 52: // op_before_init: "OPERATOR_GSB_LOOKUP" run_time_string
#line 984 "seclang-parser.yy"
      {
        /* $$ = new operators::GsbLookup($1); */
        OPERATOR_NOT_SUPPORTED("GsbLookup", yystack_[2].location);
      }
#line 2114 "seclang-parser.cc"
    break;

  case 53: // op_before_init: "OPERATOR_RSUB" run_time_string
#line 989 "seclang-parser.yy"
      {
        /* $$ = new operators::Rsub($1); */
        OPERATOR_NOT_SUPPORTED("Rsub", yystack_[2].location);
      }
#line 2123 "seclang-parser.cc"
    break;

  case 54: // op_before_init: "OPERATOR_WITHIN" run_time_string
#line 994 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::Within(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2131 "seclang-parser.cc"
    break;

  case 55: // op_before_init: "OPERATOR_CONTAINS_WORD" run_time_string
#line 998 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::ContainsWord(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2139 "seclang-parser.cc"
    break;

  case 56: // op_before_init: "OPERATOR_CONTAINS" run_time_string
#line 1002 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::Contains(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2147 "seclang-parser.cc"
    break;

  case 57: // op_before_init: "OPERATOR_ENDS_WITH" run_time_string
#line 1006 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::EndsWith(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2155 "seclang-parser.cc"
    break;

  case 58: // op_before_init: "OPERATOR_EQ" run_time_string
#line 1010 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::Eq(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2163 "seclang-parser.cc"
    break;

  case 59: // op_before_init: "OPERATOR_GE" run_time_string
#line 1014 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::Ge(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2171 "seclang-parser.cc"
    break;

  case 60: // op_before_init: "OPERATOR_GT" run_time_string
#line 1018 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::Gt(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2179 "seclang-parser.cc"
    break;

  case 61: // op_before_init: "OPERATOR_IP_MATCH_FROM_FILE" run_time_string
#line 1022 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::IpMatchF(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2187 "seclang-parser.cc"
    break;

  case 62: // op_before_init: "OPERATOR_IP_MATCH" run_time_string
#line 1026 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::IpMatch(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2195 "seclang-parser.cc"
    break;

  case 63: // op_before_init: "OPERATOR_LE" run_time_string
#line 1030 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::Le(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2203 "seclang-parser.cc"
    break;

  case 64: // op_before_init: "OPERATOR_LT" run_time_string
#line 1034 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::Lt(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2211 "seclang-parser.cc"
    break;

  case 65: // op_before_init: "OPERATOR_PM_FROM_FILE" run_time_string
#line 1038 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::PmFromFile(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2219 "seclang-parser.cc"
    break;

  case 66: // op_before_init: "OPERATOR_PM" run_time_string
#line 1042 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::Pm(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2227 "seclang-parser.cc"
    break;

  case 67: // op_before_init: "OPERATOR_RBL" run_time_string
#line 1046 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::Rbl(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2235 "seclang-parser.cc"
    break;

  case 68: // op_before_init: "OPERATOR_RX" run_time_string
#line 1050 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2243 "seclang-parser.cc"
    break;

  case 69: // op_before_init: "OPERATOR_RX_GLOBAL" run_time_string
#line 1054 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::RxGlobal(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2251 "seclang-parser.cc"
    break;

  case 70: // op_before_init: "OPERATOR_STR_EQ" run_time_string
#line 1058 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::StrEq(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2259 "seclang-parser.cc"
    break;

  case 71: // op_before_init: "OPERATOR_STR_MATCH" run_time_string
#line 1062 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::StrMatch(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2267 "seclang-parser.cc"
    break;

  case 72: // op_before_init: "OPERATOR_BEGINS_WITH" run_time_string
#line 1066 "seclang-parser.yy"
      {
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::BeginsWith(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 2275 "seclang-parser.cc"
    break;

  case 73: // op_before_init: "OPERATOR_GEOLOOKUP"
#line 1070 "seclang-parser.yy"
      {
#if defined(WITH_GEOIP) or defined(WITH_MAXMIND)
        OPERATOR_CONTAINER(yylhs.value.as < std::unique_ptr<Operator> > (), new operators::GeoLookup());
#else
        std::stringstream ss;
            ss << "This version of ModSecurity was not compiled with GeoIP or MaxMind support.";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
#endif  // WITH_GEOIP
      }
#line 2290 "seclang-parser.cc"
    break;

  case 75: // expression: "DIRECTIVE" variables op actions
#line 1085 "seclang-parser.yy"
      {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        std::vector<actions::transformations::Transformation *> *t = new std::vector<actions::transformations::Transformation *>();
        for (auto &i : *yystack_[0].value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            if (auto pt = dynamic_cast<actions::transformations::Transformation *>(i.get())) {
              t->push_back(pt);
              i.release();
            } else {
              a->push_back(i.release());
            }
        }
        variables::Variables *v = new variables::Variables();
        for (auto &i : *yystack_[2].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Operator *op = yystack_[1].value.as < std::unique_ptr<Operator> > ().release();
        std::unique_ptr<RuleWithOperator> rule(new RuleWithOperator(
            /* op */ op,
            /* variables */ v,
            /* actions */ a,
            /* transformations */ t,
            /* file name */ std::string(*yystack_[3].location.end.filename),
            /* line number */ yystack_[3].location.end.line
            ));

        if (driver.addSecRule(std::move(rule)) == false) {
            YYERROR;
        }
      }
#line 2325 "seclang-parser.cc"
    break;

  case 76: // expression: "DIRECTIVE" variables op
#line 1116 "seclang-parser.yy"
      {
        variables::Variables *v = new variables::Variables();
        for (auto &i : *yystack_[1].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        std::unique_ptr<RuleWithOperator> rule(new RuleWithOperator(
            /* op */ yystack_[0].value.as < std::unique_ptr<Operator> > ().release(),
            /* variables */ v,
            /* actions */ NULL,
            /* transformations */ NULL,
            /* file name */ std::string(*yystack_[2].location.end.filename),
            /* line number */ yystack_[2].location.end.line
            ));
        if (driver.addSecRule(std::move(rule)) == false) {
            YYERROR;
        }
      }
#line 2348 "seclang-parser.cc"
    break;

  case 77: // expression: "CONFIG_DIR_SEC_ACTION" actions
#line 1135 "seclang-parser.yy"
      {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        std::vector<actions::transformations::Transformation *> *t = new std::vector<actions::transformations::Transformation *>();
        for (auto &i : *yystack_[0].value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            if (auto pt = dynamic_cast<actions::transformations::Transformation *>(i.get())) {
              t->push_back(pt);
              i.release();
            } else {
              a->push_back(i.release());
            }
        }
        std::unique_ptr<RuleUnconditional> rule(new RuleUnconditional(
            /* actions */ a,
            /* transformations */ t,
            /* file name */ std::string(*yystack_[1].location.end.filename),
            /* line number */ yystack_[1].location.end.line
            ));
        driver.addSecAction(std::move(rule));
      }
#line 2372 "seclang-parser.cc"
    break;

  case 78: // expression: "DIRECTIVE_SECRULESCRIPT" actions
#line 1155 "seclang-parser.yy"
      {
        std::string err;
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        std::vector<actions::transformations::Transformation *> *t = new std::vector<actions::transformations::Transformation *>();
        for (auto &i : *yystack_[0].value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            if (auto pt = dynamic_cast<actions::transformations::Transformation *>(i.get())) {
              t->push_back(pt);
              i.release();
            } else {
              a->push_back(i.release());
            }
        }
        std::unique_ptr<RuleScript> r(new RuleScript(
            /* path to script */ yystack_[1].value.as < std::string > (),
            /* actions */ a,
            /* transformations */ t,
            /* file name */ std::string(*yystack_[1].location.end.filename),
            /* line number */ yystack_[1].location.end.line
            ));

        if (r->init(&err) == false) {
            driver.error(yystack_[2].location, "Failed to load script: " + err);
            YYERROR;
        }
        if (driver.addSecRuleScript(std::move(r)) == false) {
            YYERROR;
        }
      }
#line 2405 "seclang-parser.cc"
    break;

  case 79: // expression: "CONFIG_DIR_SEC_DEFAULT_ACTION" actions
#line 1184 "seclang-parser.yy"
      {
        bool hasDisruptive = false;
        std::vector<actions::Action *> *actions = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            actions->push_back(i.release());
        }
        std::vector<actions::Action *> checkedActions;
        int definedPhase = -1;
        int secRuleDefinedPhase = -1;
        for (actions::Action *a : *actions) {
            actions::Phase *phase = dynamic_cast<actions::Phase *>(a);
            if (a->isDisruptive() == true && dynamic_cast<actions::Block *>(a) == NULL) {
                hasDisruptive = true;
            }
            if (phase != NULL) {
                definedPhase = phase->m_phase;
                secRuleDefinedPhase = phase->m_secRulesPhase;
                delete phase;
            } else if (a->action_kind == actions::Action::Kind::RunTimeOnlyIfMatchKind ||
                a->action_kind == actions::Action::Kind::RunTimeBeforeMatchAttemptKind) {
                                actions::transformations::None *none = dynamic_cast<actions::transformations::None *>(a);
                if (none != NULL) {
                    driver.error(yystack_[2].location, "The transformation none is not suitable to be part of the SecDefaultActions");
                    YYERROR;
                }
                checkedActions.push_back(a);
            } else {
                driver.error(yystack_[2].location, "The action '" + *a->m_name.get() + "' is not suitable to be part of the SecDefaultActions");
                YYERROR;
            }
        }
        if (definedPhase == -1) {
            definedPhase = modsecurity::Phases::RequestHeadersPhase;
        }

        if (hasDisruptive == false) {
            driver.error(yystack_[2].location, "SecDefaultAction must specify a disruptive action.");
            YYERROR;
        }

        if (!driver.m_defaultActions[definedPhase].empty()) {
            std::stringstream ss;
            ss << "SecDefaultActions can only be placed once per phase and configuration context. Phase ";
            ss << secRuleDefinedPhase;
            ss << " was informed already.";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        for (actions::Action *a : checkedActions) {
            driver.m_defaultActions[definedPhase].push_back(
                std::unique_ptr<actions::Action>(a));
        }

        delete actions;
      }
#line 2466 "seclang-parser.cc"
    break;

  case 80: // expression: "CONFIG_DIR_SEC_MARKER"
#line 1241 "seclang-parser.yy"
      {
        driver.addSecMarker(modsecurity::utils::string::removeBracketsIfNeeded(yystack_[0].value.as < std::string > ()),
            /* file name */ std::string(*yystack_[0].location.end.filename),
            /* line number */ yystack_[0].location.end.line
        );
      }
#line 2477 "seclang-parser.cc"
    break;

  case 81: // expression: "CONFIG_DIR_RULE_ENG" "CONFIG_VALUE_OFF"
#line 1248 "seclang-parser.yy"
      {
        driver.m_secRuleEngine = modsecurity::RulesSet::DisabledRuleEngine;
      }
#line 2485 "seclang-parser.cc"
    break;

  case 82: // expression: "CONFIG_DIR_RULE_ENG" "CONFIG_VALUE_ON"
#line 1252 "seclang-parser.yy"
      {
        driver.m_secRuleEngine = modsecurity::RulesSet::EnabledRuleEngine;
      }
#line 2493 "seclang-parser.cc"
    break;

  case 83: // expression: "CONFIG_DIR_RULE_ENG" "CONFIG_VALUE_DETC"
#line 1256 "seclang-parser.yy"
      {
        driver.m_secRuleEngine = modsecurity::RulesSet::DetectionOnlyRuleEngine;
      }
#line 2501 "seclang-parser.cc"
    break;

  case 84: // expression: "CONFIG_DIR_REQ_BODY" "CONFIG_VALUE_ON"
#line 1260 "seclang-parser.yy"
      {
        driver.m_secRequestBodyAccess = modsecurity::RulesSetProperties::TrueConfigBoolean;
      }
#line 2509 "seclang-parser.cc"
    break;

  case 85: // expression: "CONFIG_DIR_REQ_BODY" "CONFIG_VALUE_OFF"
#line 1264 "seclang-parser.yy"
      {
        driver.m_secRequestBodyAccess = modsecurity::RulesSetProperties::FalseConfigBoolean;
      }
#line 2517 "seclang-parser.cc"
    break;

  case 86: // expression: "CONFIG_DIR_RES_BODY" "CONFIG_VALUE_ON"
#line 1268 "seclang-parser.yy"
      {
        driver.m_secResponseBodyAccess = modsecurity::RulesSetProperties::TrueConfigBoolean;
      }
#line 2525 "seclang-parser.cc"
    break;

  case 87: // expression: "CONFIG_DIR_RES_BODY" "CONFIG_VALUE_OFF"
#line 1272 "seclang-parser.yy"
      {
        driver.m_secResponseBodyAccess = modsecurity::RulesSetProperties::FalseConfigBoolean;
      }
#line 2533 "seclang-parser.cc"
    break;

  case 88: // expression: "CONFIG_SEC_ARGUMENT_SEPARATOR"
#line 1276 "seclang-parser.yy"
      {
        if (yystack_[0].value.as < std::string > ().length() != 1) {
          driver.error(yystack_[1].location, "Argument separator should be set to a single character.");
          YYERROR;
        }
        driver.m_secArgumentSeparator.m_value = yystack_[0].value.as < std::string > ();
        driver.m_secArgumentSeparator.m_set = true;
      }
#line 2546 "seclang-parser.cc"
    break;

  case 89: // expression: "CONFIG_COMPONENT_SIG"
#line 1285 "seclang-parser.yy"
      {
        driver.m_components.push_back(yystack_[0].value.as < std::string > ());
      }
#line 2554 "seclang-parser.cc"
    break;

  case 90: // expression: "CONFIG_CONN_ENGINE" "CONFIG_VALUE_ON"
#line 1289 "seclang-parser.yy"
      {
        driver.error(yystack_[2].location, "SecConnEngine is not yet supported.");
        YYERROR;
      }
#line 2563 "seclang-parser.cc"
    break;

  case 91: // expression: "CONFIG_CONN_ENGINE" "CONFIG_VALUE_OFF"
#line 1294 "seclang-parser.yy"
      {
      }
#line 2570 "seclang-parser.cc"
    break;

  case 92: // expression: "CONFIG_SEC_WEB_APP_ID"
#line 1297 "seclang-parser.yy"
      {
        driver.m_secWebAppId.m_value = yystack_[0].value.as < std::string > ();
        driver.m_secWebAppId.m_set = true;
      }
#line 2579 "seclang-parser.cc"
    break;

  case 93: // expression: "CONFIG_SEC_SERVER_SIG"
#line 1302 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecServerSignature is not supported.");
        YYERROR;
      }
#line 2588 "seclang-parser.cc"
    break;

  case 94: // expression: "CONFIG_SEC_CACHE_TRANSFORMATIONS"
#line 1307 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecCacheTransformations is not supported.");
        YYERROR;
      }
#line 2597 "seclang-parser.cc"
    break;

  case 95: // expression: "CONFIG_SEC_DISABLE_BACKEND_COMPRESS" "CONFIG_VALUE_ON"
#line 1312 "seclang-parser.yy"
      {
        driver.error(yystack_[2].location, "SecDisableBackendCompression is not supported.");
        YYERROR;
      }
#line 2606 "seclang-parser.cc"
    break;

  case 96: // expression: "CONFIG_SEC_DISABLE_BACKEND_COMPRESS" "CONFIG_VALUE_OFF"
#line 1317 "seclang-parser.yy"
      {
      }
#line 2613 "seclang-parser.cc"
    break;

  case 97: // expression: "CONFIG_CONTENT_INJECTION" "CONFIG_VALUE_ON"
#line 1320 "seclang-parser.yy"
      {
        driver.error(yystack_[2].location, "SecContentInjection is not yet supported.");
        YYERROR;
      }
#line 2622 "seclang-parser.cc"
    break;

  case 98: // expression: "CONFIG_CONTENT_INJECTION" "CONFIG_VALUE_OFF"
#line 1325 "seclang-parser.yy"
      {
      }
#line 2629 "seclang-parser.cc"
    break;

  case 99: // expression: "CONFIG_SEC_CHROOT_DIR"
#line 1328 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecChrootDir is not supported.");
        YYERROR;
      }
#line 2638 "seclang-parser.cc"
    break;

  case 100: // expression: "CONFIG_SEC_HASH_ENGINE" "CONFIG_VALUE_ON"
#line 1333 "seclang-parser.yy"
      {
        driver.error(yystack_[2].location, "SecHashEngine is not yet supported.");
        YYERROR;
      }
#line 2647 "seclang-parser.cc"
    break;

  case 101: // expression: "CONFIG_SEC_HASH_ENGINE" "CONFIG_VALUE_OFF"
#line 1338 "seclang-parser.yy"
      {
      }
#line 2654 "seclang-parser.cc"
    break;

  case 102: // expression: "CONFIG_SEC_HASH_KEY"
#line 1341 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecHashKey is not yet supported.");
        YYERROR;
      }
#line 2663 "seclang-parser.cc"
    break;

  case 103: // expression: "CONFIG_SEC_HASH_PARAM"
#line 1346 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecHashParam is not yet supported.");
        YYERROR;
      }
#line 2672 "seclang-parser.cc"
    break;

  case 104: // expression: "CONFIG_SEC_HASH_METHOD_RX"
#line 1351 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecHashMethodRx is not yet supported.");
        YYERROR;
      }
#line 2681 "seclang-parser.cc"
    break;

  case 105: // expression: "CONFIG_SEC_HASH_METHOD_PM"
#line 1356 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecHashMethodPm is not yet supported.");
        YYERROR;
      }
#line 2690 "seclang-parser.cc"
    break;

  case 106: // expression: "CONFIG_DIR_GSB_DB"
#line 1361 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecGsbLookupDb is not supported.");
        YYERROR;
      }
#line 2699 "seclang-parser.cc"
    break;

  case 107: // expression: "CONFIG_SEC_GUARDIAN_LOG"
#line 1366 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecGuardianLog is not supported.");
        YYERROR;
      }
#line 2708 "seclang-parser.cc"
    break;

  case 108: // expression: "CONFIG_SEC_INTERCEPT_ON_ERROR" "CONFIG_VALUE_ON"
#line 1371 "seclang-parser.yy"
      {
        driver.error(yystack_[2].location, "SecInterceptOnError is not yet supported.");
        YYERROR;
      }
#line 2717 "seclang-parser.cc"
    break;

  case 109: // expression: "CONFIG_SEC_INTERCEPT_ON_ERROR" "CONFIG_VALUE_OFF"
#line 1376 "seclang-parser.yy"
      {
      }
#line 2724 "seclang-parser.cc"
    break;

  case 110: // expression: "CONFIG_SEC_CONN_R_STATE_LIMIT"
#line 1379 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecConnReadStateLimit is not yet supported.");
        YYERROR;
      }
#line 2733 "seclang-parser.cc"
    break;

  case 111: // expression: "CONFIG_SEC_CONN_W_STATE_LIMIT"
#line 1384 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecConnWriteStateLimit is not yet supported.");
        YYERROR;
      }
#line 2742 "seclang-parser.cc"
    break;

  case 112: // expression: "CONFIG_SEC_SENSOR_ID"
#line 1389 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecSensorId is not yet supported.");
        YYERROR;
      }
#line 2751 "seclang-parser.cc"
    break;

  case 113: // expression: "CONFIG_SEC_RULE_INHERITANCE" "CONFIG_VALUE_ON"
#line 1394 "seclang-parser.yy"
      {
        driver.error(yystack_[2].location, "SecRuleInheritance is not yet supported.");
        YYERROR;
      }
#line 2760 "seclang-parser.cc"
    break;

  case 114: // expression: "CONFIG_SEC_RULE_INHERITANCE" "CONFIG_VALUE_OFF"
#line 1399 "seclang-parser.yy"
      {
      }
#line 2767 "seclang-parser.cc"
    break;

  case 115: // expression: "CONFIG_SEC_RULE_PERF_TIME"
#line 1402 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecRulePerfTime is not yet supported.");
        YYERROR;
      }
#line 2776 "seclang-parser.cc"
    break;

  case 116: // expression: "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
#line 1407 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecStreamInBodyInspection is not supported.");
        YYERROR;
      }
#line 2785 "seclang-parser.cc"
    break;

  case 117: // expression: "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
#line 1412 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecStreamOutBodyInspection is not supported.");
        YYERROR;
      }
#line 2794 "seclang-parser.cc"
    break;

  case 118: // expression: "CONFIG_SEC_RULE_REMOVE_BY_ID"
#line 1417 "seclang-parser.yy"
      {
        std::string error;
        if (driver.m_exceptions.load(yystack_[0].value.as < std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveById: failed to load:";
            ss << yystack_[0].value.as < std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2811 "seclang-parser.cc"
    break;

  case 119: // expression: "CONFIG_SEC_RULE_REMOVE_BY_TAG"
#line 1430 "seclang-parser.yy"
      {
        std::string error;
        if (driver.m_exceptions.loadRemoveRuleByTag(yystack_[0].value.as < std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveByTag: failed to load:";
            ss << yystack_[0].value.as < std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2828 "seclang-parser.cc"
    break;

  case 120: // expression: "CONFIG_SEC_RULE_REMOVE_BY_MSG"
#line 1443 "seclang-parser.yy"
      {
        std::string error;
        if (driver.m_exceptions.loadRemoveRuleByMsg(yystack_[0].value.as < std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveByMsg: failed to load:";
            ss << yystack_[0].value.as < std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2845 "seclang-parser.cc"
    break;

  case 121: // expression: "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG" variables_pre_process
#line 1456 "seclang-parser.yy"
      {
        std::string error;
        if (driver.m_exceptions.loadUpdateTargetByTag(yystack_[1].value.as < std::string > (), std::move(yystack_[0].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetByTag: failed to load:";
            ss << yystack_[1].value.as < std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2862 "seclang-parser.cc"
    break;

  case 122: // expression: "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG" variables_pre_process
#line 1469 "seclang-parser.yy"
      {
        std::string error;
        if (driver.m_exceptions.loadUpdateTargetByMsg(yystack_[1].value.as < std::string > (), std::move(yystack_[0].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetByMsg: failed to load:";
            ss << yystack_[1].value.as < std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2879 "seclang-parser.cc"
    break;

  case 123: // expression: "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID" variables_pre_process
#line 1482 "seclang-parser.yy"
      {
        std::string error;
        double ruleId;
        try {
            ruleId = std::stod(yystack_[1].value.as < std::string > ());
        } catch (...) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << "The input \"" + yystack_[1].value.as < std::string > () + "\" does not ";
            ss << "seems to be a valid rule id.";
            ss << ". ";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        if (driver.m_exceptions.loadUpdateTargetById(ruleId, std::move(yystack_[0].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << yystack_[1].value.as < std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2909 "seclang-parser.cc"
    break;

  case 124: // expression: "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID" actions
#line 1508 "seclang-parser.yy"
      {
        std::string error;
        double ruleId;
        try {
            ruleId = std::stod(yystack_[1].value.as < std::string > ());
        } catch (...) {
            std::stringstream ss;
            ss << "SecRuleUpdateActionById: failed to load:";
            ss << "The input \"" + yystack_[1].value.as < std::string > () + "\" does not ";
            ss << "seems to be a valid rule id.";
            ss << ". ";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }


        if (driver.m_exceptions.loadUpdateActionById(ruleId, std::move(yystack_[0].value.as < std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateActionById: failed to load:";
            ss << yystack_[1].value.as < std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2940 "seclang-parser.cc"
    break;

  case 125: // expression: "CONFIG_DIR_DEBUG_LVL"
#line 1536 "seclang-parser.yy"
      {
        if (driver.m_debugLog != NULL) {
          driver.m_debugLog->setDebugLogLevel(atoi(yystack_[0].value.as < std::string > ().c_str()));
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2956 "seclang-parser.cc"
    break;

  case 126: // expression: "CONFIG_DIR_DEBUG_LOG"
#line 1548 "seclang-parser.yy"
      {
        if (driver.m_debugLog != NULL) {
            std::string error;
            driver.m_debugLog->setDebugLogFile(yystack_[0].value.as < std::string > (), &error);
            if (error.size() > 0) {
                std::stringstream ss;
                ss << "Failed to start DebugLog: " << error;
                driver.error(yystack_[1].location, ss.str());
                YYERROR;
            }
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2979 "seclang-parser.cc"
    break;

  case 127: // expression: "CONFIG_DIR_GEO_DB"
#line 1568 "seclang-parser.yy"
      {
#if defined(WITH_GEOIP) or defined(WITH_MAXMIND)
        std::string err;
        std::string file = modsecurity::utils::find_resource(yystack_[0].value.as < std::string > (),
            *yystack_[0].location.end.filename, &err);
        if (file.empty()) {
            std::stringstream ss;
            ss << "Failed to load locate the GeoDB file from: " << yystack_[0].value.as < std::string > () << " ";
            ss << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
        if (Utils::GeoLookup::getInstance().setDataBase(file, &err) == false) {
            std::stringstream ss;
            ss << "Failed to load the GeoDB from: ";
            ss << file << ". " << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
#else
        std::stringstream ss;
        ss << "This version of ModSecurity was not compiled with GeoIP or MaxMind support.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
#endif  // WITH_GEOIP
      }
#line 3010 "seclang-parser.cc"
    break;

  case 128: // expression: "CONFIG_DIR_ARGS_LIMIT"
#line 1595 "seclang-parser.yy"
      {
        driver.m_argumentsLimit.m_set = true;
        driver.m_argumentsLimit.m_value = atoi(yystack_[0].value.as < std::string > ().c_str());
      }
#line 3019 "seclang-parser.cc"
    break;

  case 129: // expression: "CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT"
#line 1600 "seclang-parser.yy"
      {
        driver.m_requestBodyJsonDepthLimit.m_set = true;
        driver.m_requestBodyJsonDepthLimit.m_value = atoi(yystack_[0].value.as < std::string > ().c_str());
      }
#line 3028 "seclang-parser.cc"
    break;

  case 130: // expression: "CONFIG_DIR_REQ_BODY_LIMIT"
#line 1606 "seclang-parser.yy"
      {
        driver.m_requestBodyLimit.m_set = true;
        driver.m_requestBodyLimit.m_value = atoi(yystack_[0].value.as < std::string > ().c_str());
      }
#line 3037 "seclang-parser.cc"
    break;

  case 131: // expression: "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
#line 1611 "seclang-parser.yy"
      {
        driver.m_requestBodyNoFilesLimit.m_set = true;
        driver.m_requestBodyNoFilesLimit.m_value = atoi(yystack_[0].value.as < std::string > ().c_str());
      }
#line 3046 "seclang-parser.cc"
    break;

  case 132: // expression: "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
#line 1616 "seclang-parser.yy"
      {
        std::stringstream ss;
        ss << "As of ModSecurity version 3.0, SecRequestBodyInMemoryLimit is no longer ";
        ss << "supported. Instead, you can use your web server configurations to control ";
        ss << "those values. ModSecurity will follow the web server decision.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
      }
#line 3059 "seclang-parser.cc"
    break;

  case 133: // expression: "CONFIG_DIR_RES_BODY_LIMIT"
#line 1625 "seclang-parser.yy"
      {
        driver.m_responseBodyLimit.m_set = true;
        driver.m_responseBodyLimit.m_value = atoi(yystack_[0].value.as < std::string > ().c_str());
      }
#line 3068 "seclang-parser.cc"
    break;

  case 134: // expression: "CONFIG_DIR_REQ_BODY_LIMIT_ACTION" "CONFIG_VALUE_PROCESS_PARTIAL"
#line 1630 "seclang-parser.yy"
      {
        driver.m_requestBodyLimitAction = modsecurity::RulesSet::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 3076 "seclang-parser.cc"
    break;

  case 135: // expression: "CONFIG_DIR_REQ_BODY_LIMIT_ACTION" "CONFIG_VALUE_REJECT"
#line 1634 "seclang-parser.yy"
      {
        driver.m_requestBodyLimitAction = modsecurity::RulesSet::BodyLimitAction::RejectBodyLimitAction;
      }
#line 3084 "seclang-parser.cc"
    break;

  case 136: // expression: "CONFIG_DIR_RES_BODY_LIMIT_ACTION" "CONFIG_VALUE_PROCESS_PARTIAL"
#line 1638 "seclang-parser.yy"
      {
        driver.m_responseBodyLimitAction = modsecurity::RulesSet::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 3092 "seclang-parser.cc"
    break;

  case 137: // expression: "CONFIG_DIR_RES_BODY_LIMIT_ACTION" "CONFIG_VALUE_REJECT"
#line 1642 "seclang-parser.yy"
      {
        driver.m_responseBodyLimitAction = modsecurity::RulesSet::BodyLimitAction::RejectBodyLimitAction;
      }
#line 3100 "seclang-parser.cc"
    break;

  case 138: // expression: "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION" "CONFIG_VALUE_ABORT"
#line 1646 "seclang-parser.yy"
      {
        driver.m_remoteRulesActionOnFailed = RulesSet::OnFailedRemoteRulesAction::AbortOnFailedRemoteRulesAction;
      }
#line 3108 "seclang-parser.cc"
    break;

  case 139: // expression: "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION" "CONFIG_VALUE_WARN"
#line 1650 "seclang-parser.yy"
      {
        driver.m_remoteRulesActionOnFailed = RulesSet::OnFailedRemoteRulesAction::WarnOnFailedRemoteRulesAction;
      }
#line 3116 "seclang-parser.cc"
    break;

  case 141: // expression: "CONFIG_DIR_PCRE_MATCH_LIMIT"
#line 1659 "seclang-parser.yy"
      {
        driver.m_pcreMatchLimit.m_set = true;
        driver.m_pcreMatchLimit.m_value = atoi(yystack_[0].value.as < std::string > ().c_str());
      }
#line 3125 "seclang-parser.cc"
    break;

  case 142: // expression: "CONGIG_DIR_RESPONSE_BODY_MP"
#line 1664 "seclang-parser.yy"
      {
        std::istringstream buf(yystack_[0].value.as < std::string > ());
        std::istream_iterator<std::string> beg(buf), end;
        std::set<std::string> tokens(beg, end);
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        for (std::set<std::string>::iterator it=tokens.begin();
            it!=tokens.end(); ++it)
        {
            driver.m_responseBodyTypeToBeInspected.m_value.insert(*it);
        }
      }
#line 3141 "seclang-parser.cc"
    break;

  case 143: // expression: "CONGIG_DIR_RESPONSE_BODY_MP_CLEAR"
#line 1676 "seclang-parser.yy"
      {
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        driver.m_responseBodyTypeToBeInspected.m_clear = true;
        driver.m_responseBodyTypeToBeInspected.m_value.clear();
      }
#line 3151 "seclang-parser.cc"
    break;

  case 144: // expression: "CONFIG_XML_EXTERNAL_ENTITY" "CONFIG_VALUE_OFF"
#line 1682 "seclang-parser.yy"
      {
        driver.m_secXMLExternalEntity = modsecurity::RulesSetProperties::FalseConfigBoolean;
      }
#line 3159 "seclang-parser.cc"
    break;

  case 145: // expression: "CONFIG_XML_EXTERNAL_ENTITY" "CONFIG_VALUE_ON"
#line 1686 "seclang-parser.yy"
      {
        driver.m_secXMLExternalEntity = modsecurity::RulesSetProperties::TrueConfigBoolean;
      }
#line 3167 "seclang-parser.cc"
    break;

  case 146: // expression: "CONGIG_DIR_SEC_TMP_DIR"
#line 1690 "seclang-parser.yy"
      {
/* Parser error disabled to avoid breaking default installations with modsecurity.conf-recommended
        std::stringstream ss;
        ss << "As of ModSecurity version 3.0, SecTmpDir is no longer supported.";
        ss << " Instead, you can use your web server configurations to control when";
        ss << "and where to swap. ModSecurity will follow the web server decision.";
        driver.error(@0, ss.str());
        YYERROR;
*/
      }
#line 3182 "seclang-parser.cc"
    break;

  case 149: // expression: "CONGIG_DIR_SEC_COOKIE_FORMAT"
#line 1711 "seclang-parser.yy"
      {
        if (atoi(yystack_[0].value.as < std::string > ().c_str()) == 1) {
          driver.error(yystack_[1].location, "SecCookieFormat 1 is not yet supported.");
          YYERROR;
        }
      }
#line 3193 "seclang-parser.cc"
    break;

  case 150: // expression: "CONFIG_SEC_COOKIEV0_SEPARATOR"
#line 1718 "seclang-parser.yy"
      {
        driver.error(yystack_[1].location, "SecCookieV0Separator is not yet supported.");
        YYERROR;
      }
#line 3202 "seclang-parser.cc"
    break;

  case 152: // expression: "CONFIG_DIR_UNICODE_MAP_FILE"
#line 1728 "seclang-parser.yy"
      {
        std::string error;
        std::vector<std::string> param;
        double num = 0;
        std::string f;
        std::string file;
        std::string err;
        param = utils::string::ssplit(yystack_[0].value.as < std::string > (), ' ');
        if (param.size() <= 1) {
            std::stringstream ss;
            ss << "Failed to process unicode map, missing ";
            ss << "parameter: " << yystack_[0].value.as < std::string > () << " ";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }

        try {
            num = std::stod(param.back());
        } catch (...) {
            std::stringstream ss;
            ss << "Failed to process unicode map, last parameter is ";
            ss << "expected to be a number: " << param.back() << " ";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
        param.pop_back();

        while (param.size() > 0) {
            if (f.empty()) {
                f = param.back();
            } else {
                f = param.back() + " " + f;
            }
            param.pop_back();
        }

        file = modsecurity::utils::find_resource(f, *yystack_[0].location.end.filename, &err);
        if (file.empty()) {
            std::stringstream ss;
            ss << "Failed to locate the unicode map file from: " << f << " ";
            ss << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }

        ConfigUnicodeMap::loadConfig(file, num, &driver, &error);

        if (!error.empty()) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }

      }
#line 3260 "seclang-parser.cc"
    break;

  case 153: // expression: "CONFIG_SEC_COLLECTION_TIMEOUT"
#line 1782 "seclang-parser.yy"
      {
/* Parser error disabled to avoid breaking default CRS installations with crs-setup.conf-recommended
        driver.error(@0, "SecCollectionTimeout is not yet supported.");
        YYERROR;
*/
      }
#line 3271 "seclang-parser.cc"
    break;

  case 154: // expression: "CONFIG_SEC_HTTP_BLKEY"
#line 1789 "seclang-parser.yy"
      {
        driver.m_httpblKey.m_set = true;
        driver.m_httpblKey.m_value = yystack_[0].value.as < std::string > ();
      }
#line 3280 "seclang-parser.cc"
    break;

  case 155: // variables: variables_pre_process
#line 1797 "seclang-parser.yy"
      {
        std::unique_ptr<std::vector<std::unique_ptr<Variable> > > originalList = std::move(yystack_[0].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> newList(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> newNewList(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> exclusionVars(new std::vector<std::unique_ptr<Variable>>());
        while (!originalList->empty()) {
            std::unique_ptr<Variable> var = std::move(originalList->back());
            originalList->pop_back();
            if (dynamic_cast<VariableModificatorExclusion*>(var.get())) {
                exclusionVars->push_back(std::move(var));
            } else {
                newList->push_back(std::move(var));
            }
        }

        while (!newList->empty()) {
            bool doNotAdd = false;
            std::unique_ptr<Variable> var = std::move(newList->back());
            newList->pop_back();
            for (auto &i : *exclusionVars) {
                if (*var == *i) {
                    doNotAdd = true;
                }
                if (i->belongsToCollection(var.get())) {
                    var->addsKeyExclusion(i.get());
                }
            }
            if (!doNotAdd) {
                newNewList->push_back(std::move(var));
            }
        }
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(newNewList);
      }
#line 3318 "seclang-parser.cc"
    break;

  case 156: // variables_pre_process: variables_may_be_quoted
#line 1834 "seclang-parser.yy"
      {
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[0].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 3326 "seclang-parser.cc"
    break;

  case 157: // variables_pre_process: "QUOTATION_MARK" variables_may_be_quoted "QUOTATION_MARK"
#line 1838 "seclang-parser.yy"
      {
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[1].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 3334 "seclang-parser.cc"
    break;

  case 158: // variables_may_be_quoted: variables_may_be_quoted PIPE var
#line 1845 "seclang-parser.yy"
      {
        yystack_[2].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(yystack_[0].value.as < std::unique_ptr<Variable> > ()));
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[2].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 3343 "seclang-parser.cc"
    break;

  case 159: // variables_may_be_quoted: variables_may_be_quoted PIPE VAR_EXCLUSION var
#line 1850 "seclang-parser.yy"
      {
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as < std::unique_ptr<Variable> > ())));
        yystack_[3].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 3353 "seclang-parser.cc"
    break;

  case 160: // variables_may_be_quoted: variables_may_be_quoted PIPE VAR_COUNT var
#line 1856 "seclang-parser.yy"
      {
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as < std::unique_ptr<Variable> > ())));
        yystack_[3].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 3363 "seclang-parser.cc"
    break;

  case 161: // variables_may_be_quoted: var
#line 1862 "seclang-parser.yy"
      {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        b->push_back(std::move(yystack_[0].value.as < std::unique_ptr<Variable> > ()));
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 3373 "seclang-parser.cc"
    break;

  case 162: // variables_may_be_quoted: VAR_EXCLUSION var
#line 1868 "seclang-parser.yy"
      {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as < std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 3384 "seclang-parser.cc"
    break;

  case 163: // variables_may_be_quoted: VAR_COUNT var
#line 1875 "seclang-parser.yy"
      {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as < std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as < std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 3395 "seclang-parser.cc"
    break;

  case 164: // var: VARIABLE_ARGS "Dictionary element"
#line 1885 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Args_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3403 "seclang-parser.cc"
    break;

  case 165: // var: VARIABLE_ARGS "Dictionary element, selected by regexp"
#line 1889 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Args_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3411 "seclang-parser.cc"
    break;

  case 166: // var: VARIABLE_ARGS
#line 1893 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Args_NoDictElement());
      }
#line 3419 "seclang-parser.cc"
    break;

  case 167: // var: VARIABLE_ARGS_POST "Dictionary element"
#line 1897 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsPost_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3427 "seclang-parser.cc"
    break;

  case 168: // var: VARIABLE_ARGS_POST "Dictionary element, selected by regexp"
#line 1901 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsPost_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3435 "seclang-parser.cc"
    break;

  case 169: // var: VARIABLE_ARGS_POST
#line 1905 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsPost_NoDictElement());
      }
#line 3443 "seclang-parser.cc"
    break;

  case 170: // var: VARIABLE_ARGS_GET "Dictionary element"
#line 1909 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsGet_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3451 "seclang-parser.cc"
    break;

  case 171: // var: VARIABLE_ARGS_GET "Dictionary element, selected by regexp"
#line 1913 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsGet_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3459 "seclang-parser.cc"
    break;

  case 172: // var: VARIABLE_ARGS_GET
#line 1917 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsGet_NoDictElement());
      }
#line 3467 "seclang-parser.cc"
    break;

  case 173: // var: VARIABLE_FILES_SIZES "Dictionary element"
#line 1921 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesSizes_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3475 "seclang-parser.cc"
    break;

  case 174: // var: VARIABLE_FILES_SIZES "Dictionary element, selected by regexp"
#line 1925 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesSizes_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3483 "seclang-parser.cc"
    break;

  case 175: // var: VARIABLE_FILES_SIZES
#line 1929 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesSizes_NoDictElement());
      }
#line 3491 "seclang-parser.cc"
    break;

  case 176: // var: VARIABLE_FILES_NAMES "Dictionary element"
#line 1933 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesNames_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3499 "seclang-parser.cc"
    break;

  case 177: // var: VARIABLE_FILES_NAMES "Dictionary element, selected by regexp"
#line 1937 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesNames_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3507 "seclang-parser.cc"
    break;

  case 178: // var: VARIABLE_FILES_NAMES
#line 1941 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesNames_NoDictElement());
      }
#line 3515 "seclang-parser.cc"
    break;

  case 179: // var: VARIABLE_FILES_TMP_CONTENT "Dictionary element"
#line 1945 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesTmpContent_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3523 "seclang-parser.cc"
    break;

  case 180: // var: VARIABLE_FILES_TMP_CONTENT "Dictionary element, selected by regexp"
#line 1949 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesTmpContent_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3531 "seclang-parser.cc"
    break;

  case 181: // var: VARIABLE_FILES_TMP_CONTENT
#line 1953 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesTmpContent_NoDictElement());
      }
#line 3539 "seclang-parser.cc"
    break;

  case 182: // var: VARIABLE_MULTIPART_FILENAME "Dictionary element"
#line 1957 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultiPartFileName_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3547 "seclang-parser.cc"
    break;

  case 183: // var: VARIABLE_MULTIPART_FILENAME "Dictionary element, selected by regexp"
#line 1961 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultiPartFileName_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3555 "seclang-parser.cc"
    break;

  case 184: // var: VARIABLE_MULTIPART_FILENAME
#line 1965 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultiPartFileName_NoDictElement());
      }
#line 3563 "seclang-parser.cc"
    break;

  case 185: // var: VARIABLE_MULTIPART_NAME "Dictionary element"
#line 1969 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultiPartName_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3571 "seclang-parser.cc"
    break;

  case 186: // var: VARIABLE_MULTIPART_NAME "Dictionary element, selected by regexp"
#line 1973 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultiPartName_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3579 "seclang-parser.cc"
    break;

  case 187: // var: VARIABLE_MULTIPART_NAME
#line 1977 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultiPartName_NoDictElement());
      }
#line 3587 "seclang-parser.cc"
    break;

  case 188: // var: VARIABLE_MATCHED_VARS_NAMES "Dictionary element"
#line 1981 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MatchedVarsNames_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3595 "seclang-parser.cc"
    break;

  case 189: // var: VARIABLE_MATCHED_VARS_NAMES "Dictionary element, selected by regexp"
#line 1985 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MatchedVarsNames_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3603 "seclang-parser.cc"
    break;

  case 190: // var: VARIABLE_MATCHED_VARS_NAMES
#line 1989 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MatchedVarsNames_NoDictElement());
      }
#line 3611 "seclang-parser.cc"
    break;

  case 191: // var: VARIABLE_MATCHED_VARS "Dictionary element"
#line 1993 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MatchedVars_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3619 "seclang-parser.cc"
    break;

  case 192: // var: VARIABLE_MATCHED_VARS "Dictionary element, selected by regexp"
#line 1997 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MatchedVars_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3627 "seclang-parser.cc"
    break;

  case 193: // var: VARIABLE_MATCHED_VARS
#line 2001 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MatchedVars_NoDictElement());
      }
#line 3635 "seclang-parser.cc"
    break;

  case 194: // var: VARIABLE_FILES "Dictionary element"
#line 2005 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Files_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3643 "seclang-parser.cc"
    break;

  case 195: // var: VARIABLE_FILES "Dictionary element, selected by regexp"
#line 2009 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Files_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3651 "seclang-parser.cc"
    break;

  case 196: // var: VARIABLE_FILES
#line 2013 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Files_NoDictElement());
      }
#line 3659 "seclang-parser.cc"
    break;

  case 197: // var: VARIABLE_REQUEST_COOKIES "Dictionary element"
#line 2017 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestCookies_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3667 "seclang-parser.cc"
    break;

  case 198: // var: VARIABLE_REQUEST_COOKIES "Dictionary element, selected by regexp"
#line 2021 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestCookies_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3675 "seclang-parser.cc"
    break;

  case 199: // var: VARIABLE_REQUEST_COOKIES
#line 2025 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestCookies_NoDictElement());
      }
#line 3683 "seclang-parser.cc"
    break;

  case 200: // var: VARIABLE_REQUEST_HEADERS "Dictionary element"
#line 2029 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestHeaders_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3691 "seclang-parser.cc"
    break;

  case 201: // var: VARIABLE_REQUEST_HEADERS "Dictionary element, selected by regexp"
#line 2033 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestHeaders_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3699 "seclang-parser.cc"
    break;

  case 202: // var: VARIABLE_REQUEST_HEADERS
#line 2037 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestHeaders_NoDictElement());
      }
#line 3707 "seclang-parser.cc"
    break;

  case 203: // var: VARIABLE_RESPONSE_HEADERS "Dictionary element"
#line 2041 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ResponseHeaders_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3715 "seclang-parser.cc"
    break;

  case 204: // var: VARIABLE_RESPONSE_HEADERS "Dictionary element, selected by regexp"
#line 2045 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ResponseHeaders_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3723 "seclang-parser.cc"
    break;

  case 205: // var: VARIABLE_RESPONSE_HEADERS
#line 2049 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ResponseHeaders_NoDictElement());
      }
#line 3731 "seclang-parser.cc"
    break;

  case 206: // var: VARIABLE_GEO "Dictionary element"
#line 2053 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Geo_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3739 "seclang-parser.cc"
    break;

  case 207: // var: VARIABLE_GEO "Dictionary element, selected by regexp"
#line 2057 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Geo_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3747 "seclang-parser.cc"
    break;

  case 208: // var: VARIABLE_GEO
#line 2061 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Geo_NoDictElement());
      }
#line 3755 "seclang-parser.cc"
    break;

  case 209: // var: VARIABLE_REQUEST_COOKIES_NAMES "Dictionary element"
#line 2065 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestCookiesNames_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3763 "seclang-parser.cc"
    break;

  case 210: // var: VARIABLE_REQUEST_COOKIES_NAMES "Dictionary element, selected by regexp"
#line 2069 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestCookiesNames_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3771 "seclang-parser.cc"
    break;

  case 211: // var: VARIABLE_REQUEST_COOKIES_NAMES
#line 2073 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestCookiesNames_NoDictElement());
      }
#line 3779 "seclang-parser.cc"
    break;

  case 212: // var: VARIABLE_MULTIPART_PART_HEADERS "Dictionary element"
#line 2077 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartPartHeaders_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3787 "seclang-parser.cc"
    break;

  case 213: // var: VARIABLE_MULTIPART_PART_HEADERS "Dictionary element, selected by regexp"
#line 2081 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartPartHeaders_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3795 "seclang-parser.cc"
    break;

  case 214: // var: VARIABLE_MULTIPART_PART_HEADERS
#line 2085 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartPartHeaders_NoDictElement());
      }
#line 3803 "seclang-parser.cc"
    break;

  case 215: // var: VARIABLE_RULE "Dictionary element"
#line 2089 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Rule_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3811 "seclang-parser.cc"
    break;

  case 216: // var: VARIABLE_RULE "Dictionary element, selected by regexp"
#line 2093 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Rule_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3819 "seclang-parser.cc"
    break;

  case 217: // var: VARIABLE_RULE
#line 2097 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Rule_NoDictElement());
      }
#line 3827 "seclang-parser.cc"
    break;

  case 218: // var: "RUN_TIME_VAR_ENV" "Dictionary element"
#line 2101 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Env("ENV:" + yystack_[0].value.as < std::string > ()));
      }
#line 3835 "seclang-parser.cc"
    break;

  case 219: // var: "RUN_TIME_VAR_ENV" "Dictionary element, selected by regexp"
#line 2105 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Env("ENV:" + yystack_[0].value.as < std::string > ()));
      }
#line 3843 "seclang-parser.cc"
    break;

  case 220: // var: "RUN_TIME_VAR_ENV"
#line 2109 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Env("ENV"));
      }
#line 3851 "seclang-parser.cc"
    break;

  case 221: // var: "RUN_TIME_VAR_XML" "Dictionary element"
#line 2113 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::XML("XML:" + yystack_[0].value.as < std::string > ()));
      }
#line 3859 "seclang-parser.cc"
    break;

  case 222: // var: "RUN_TIME_VAR_XML" "Dictionary element, selected by regexp"
#line 2117 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::XML("XML:" + yystack_[0].value.as < std::string > ()));
      }
#line 3867 "seclang-parser.cc"
    break;

  case 223: // var: "RUN_TIME_VAR_XML"
#line 2121 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::XML_NoDictElement());
      }
#line 3875 "seclang-parser.cc"
    break;

  case 224: // var: "FILES_TMPNAMES" "Dictionary element"
#line 2125 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesTmpNames_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3883 "seclang-parser.cc"
    break;

  case 225: // var: "FILES_TMPNAMES" "Dictionary element, selected by regexp"
#line 2129 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesTmpNames_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3891 "seclang-parser.cc"
    break;

  case 226: // var: "FILES_TMPNAMES"
#line 2133 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesTmpNames_NoDictElement());
      }
#line 3899 "seclang-parser.cc"
    break;

  case 227: // var: "RESOURCE" run_time_string
#line 2137 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Resource_DynamicElement(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 3907 "seclang-parser.cc"
    break;

  case 228: // var: "RESOURCE" "Dictionary element"
#line 2141 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Resource_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3915 "seclang-parser.cc"
    break;

  case 229: // var: "RESOURCE" "Dictionary element, selected by regexp"
#line 2145 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Resource_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3923 "seclang-parser.cc"
    break;

  case 230: // var: "RESOURCE"
#line 2149 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Resource_NoDictElement());
      }
#line 3931 "seclang-parser.cc"
    break;

  case 231: // var: "VARIABLE_IP" run_time_string
#line 2153 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Ip_DynamicElement(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 3939 "seclang-parser.cc"
    break;

  case 232: // var: "VARIABLE_IP" "Dictionary element"
#line 2157 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Ip_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3947 "seclang-parser.cc"
    break;

  case 233: // var: "VARIABLE_IP" "Dictionary element, selected by regexp"
#line 2161 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Ip_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3955 "seclang-parser.cc"
    break;

  case 234: // var: "VARIABLE_IP"
#line 2165 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Ip_NoDictElement());
      }
#line 3963 "seclang-parser.cc"
    break;

  case 235: // var: "VARIABLE_GLOBAL" run_time_string
#line 2169 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Global_DynamicElement(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 3971 "seclang-parser.cc"
    break;

  case 236: // var: "VARIABLE_GLOBAL" "Dictionary element"
#line 2173 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Global_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 3979 "seclang-parser.cc"
    break;

  case 237: // var: "VARIABLE_GLOBAL" "Dictionary element, selected by regexp"
#line 2177 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Global_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 3987 "seclang-parser.cc"
    break;

  case 238: // var: "VARIABLE_GLOBAL"
#line 2181 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Global_NoDictElement());
      }
#line 3995 "seclang-parser.cc"
    break;

  case 239: // var: "VARIABLE_USER" run_time_string
#line 2185 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::User_DynamicElement(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 4003 "seclang-parser.cc"
    break;

  case 240: // var: "VARIABLE_USER" "Dictionary element"
#line 2189 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::User_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 4011 "seclang-parser.cc"
    break;

  case 241: // var: "VARIABLE_USER" "Dictionary element, selected by regexp"
#line 2193 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::User_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 4019 "seclang-parser.cc"
    break;

  case 242: // var: "VARIABLE_USER"
#line 2197 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::User_NoDictElement());
      }
#line 4027 "seclang-parser.cc"
    break;

  case 243: // var: "VARIABLE_TX" run_time_string
#line 2201 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Tx_DynamicElement(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 4035 "seclang-parser.cc"
    break;

  case 244: // var: "VARIABLE_TX" "Dictionary element"
#line 2205 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Tx_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 4043 "seclang-parser.cc"
    break;

  case 245: // var: "VARIABLE_TX" "Dictionary element, selected by regexp"
#line 2209 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Tx_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 4051 "seclang-parser.cc"
    break;

  case 246: // var: "VARIABLE_TX"
#line 2213 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Tx_NoDictElement());
      }
#line 4059 "seclang-parser.cc"
    break;

  case 247: // var: "VARIABLE_SESSION" run_time_string
#line 2217 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Session_DynamicElement(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 4067 "seclang-parser.cc"
    break;

  case 248: // var: "VARIABLE_SESSION" "Dictionary element"
#line 2221 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Session_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 4075 "seclang-parser.cc"
    break;

  case 249: // var: "VARIABLE_SESSION" "Dictionary element, selected by regexp"
#line 2225 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Session_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 4083 "seclang-parser.cc"
    break;

  case 250: // var: "VARIABLE_SESSION"
#line 2229 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Session_NoDictElement());
      }
#line 4091 "seclang-parser.cc"
    break;

  case 251: // var: "Variable ARGS_NAMES" "Dictionary element"
#line 2233 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsNames_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 4099 "seclang-parser.cc"
    break;

  case 252: // var: "Variable ARGS_NAMES" "Dictionary element, selected by regexp"
#line 2237 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsNames_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 4107 "seclang-parser.cc"
    break;

  case 253: // var: "Variable ARGS_NAMES"
#line 2241 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsNames_NoDictElement());
      }
#line 4115 "seclang-parser.cc"
    break;

  case 254: // var: VARIABLE_ARGS_GET_NAMES "Dictionary element"
#line 2245 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsGetNames_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 4123 "seclang-parser.cc"
    break;

  case 255: // var: VARIABLE_ARGS_GET_NAMES "Dictionary element, selected by regexp"
#line 2249 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsGetNames_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 4131 "seclang-parser.cc"
    break;

  case 256: // var: VARIABLE_ARGS_GET_NAMES
#line 2253 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsGetNames_NoDictElement());
      }
#line 4139 "seclang-parser.cc"
    break;

  case 257: // var: VARIABLE_ARGS_POST_NAMES "Dictionary element"
#line 2258 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsPostNames_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 4147 "seclang-parser.cc"
    break;

  case 258: // var: VARIABLE_ARGS_POST_NAMES "Dictionary element, selected by regexp"
#line 2262 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsPostNames_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 4155 "seclang-parser.cc"
    break;

  case 259: // var: VARIABLE_ARGS_POST_NAMES
#line 2266 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsPostNames_NoDictElement());
      }
#line 4163 "seclang-parser.cc"
    break;

  case 260: // var: VARIABLE_REQUEST_HEADERS_NAMES "Dictionary element"
#line 2271 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestHeadersNames_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 4171 "seclang-parser.cc"
    break;

  case 261: // var: VARIABLE_REQUEST_HEADERS_NAMES "Dictionary element, selected by regexp"
#line 2275 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestHeadersNames_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 4179 "seclang-parser.cc"
    break;

  case 262: // var: VARIABLE_REQUEST_HEADERS_NAMES
#line 2279 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestHeadersNames_NoDictElement());
      }
#line 4187 "seclang-parser.cc"
    break;

  case 263: // var: VARIABLE_RESPONSE_CONTENT_TYPE
#line 2284 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ResponseContentType());
      }
#line 4195 "seclang-parser.cc"
    break;

  case 264: // var: VARIABLE_RESPONSE_HEADERS_NAMES "Dictionary element"
#line 2289 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ResponseHeadersNames_DictElement(yystack_[0].value.as < std::string > ()));
      }
#line 4203 "seclang-parser.cc"
    break;

  case 265: // var: VARIABLE_RESPONSE_HEADERS_NAMES "Dictionary element, selected by regexp"
#line 2293 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ResponseHeadersNames_DictElementRegexp(yystack_[0].value.as < std::string > ()));
      }
#line 4211 "seclang-parser.cc"
    break;

  case 266: // var: VARIABLE_RESPONSE_HEADERS_NAMES
#line 2297 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ResponseHeadersNames_NoDictElement());
      }
#line 4219 "seclang-parser.cc"
    break;

  case 267: // var: VARIABLE_ARGS_COMBINED_SIZE
#line 2301 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ArgsCombinedSize());
      }
#line 4227 "seclang-parser.cc"
    break;

  case 268: // var: "AUTH_TYPE"
#line 2305 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::AuthType());
      }
#line 4235 "seclang-parser.cc"
    break;

  case 269: // var: "FILES_COMBINED_SIZE"
#line 2309 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FilesCombinedSize());
      }
#line 4243 "seclang-parser.cc"
    break;

  case 270: // var: "FULL_REQUEST"
#line 2313 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FullRequest());
      }
#line 4251 "seclang-parser.cc"
    break;

  case 271: // var: "FULL_REQUEST_LENGTH"
#line 2317 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::FullRequestLength());
      }
#line 4259 "seclang-parser.cc"
    break;

  case 272: // var: "INBOUND_DATA_ERROR"
#line 2321 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::InboundDataError());
      }
#line 4267 "seclang-parser.cc"
    break;

  case 273: // var: "MATCHED_VAR"
#line 2325 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MatchedVar());
      }
#line 4275 "seclang-parser.cc"
    break;

  case 274: // var: "MATCHED_VAR_NAME"
#line 2329 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MatchedVarName());
      }
#line 4283 "seclang-parser.cc"
    break;

  case 275: // var: "MSC_PCRE_ERROR"
#line 2333 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MscPcreError());
      }
#line 4291 "seclang-parser.cc"
    break;

  case 276: // var: "MSC_PCRE_LIMITS_EXCEEDED"
#line 2337 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MscPcreLimitsExceeded());
      }
#line 4299 "seclang-parser.cc"
    break;

  case 277: // var: VARIABLE_MULTIPART_BOUNDARY_QUOTED
#line 2341 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartBoundaryQuoted());
      }
#line 4307 "seclang-parser.cc"
    break;

  case 278: // var: VARIABLE_MULTIPART_BOUNDARY_WHITESPACE
#line 2345 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartBoundaryWhiteSpace());
      }
#line 4315 "seclang-parser.cc"
    break;

  case 279: // var: "MULTIPART_CRLF_LF_LINES"
#line 2349 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartCrlfLFLines());
      }
#line 4323 "seclang-parser.cc"
    break;

  case 280: // var: "MULTIPART_DATA_AFTER"
#line 2353 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartDateAfter());
      }
#line 4331 "seclang-parser.cc"
    break;

  case 281: // var: VARIABLE_MULTIPART_DATA_BEFORE
#line 2357 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartDateBefore());
      }
#line 4339 "seclang-parser.cc"
    break;

  case 282: // var: "MULTIPART_FILE_LIMIT_EXCEEDED"
#line 2361 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartFileLimitExceeded());
      }
#line 4347 "seclang-parser.cc"
    break;

  case 283: // var: "MULTIPART_HEADER_FOLDING"
#line 2365 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartHeaderFolding());
      }
#line 4355 "seclang-parser.cc"
    break;

  case 284: // var: "MULTIPART_INVALID_HEADER_FOLDING"
#line 2369 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartInvalidHeaderFolding());
      }
#line 4363 "seclang-parser.cc"
    break;

  case 285: // var: VARIABLE_MULTIPART_INVALID_PART
#line 2373 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartInvalidPart());
      }
#line 4371 "seclang-parser.cc"
    break;

  case 286: // var: "MULTIPART_INVALID_QUOTING"
#line 2377 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartInvalidQuoting());
      }
#line 4379 "seclang-parser.cc"
    break;

  case 287: // var: VARIABLE_MULTIPART_LF_LINE
#line 2381 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartLFLine());
      }
#line 4387 "seclang-parser.cc"
    break;

  case 288: // var: VARIABLE_MULTIPART_MISSING_SEMICOLON
#line 2385 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartMissingSemicolon());
      }
#line 4395 "seclang-parser.cc"
    break;

  case 289: // var: VARIABLE_MULTIPART_SEMICOLON_MISSING
#line 2389 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartMissingSemicolon());
      }
#line 4403 "seclang-parser.cc"
    break;

  case 290: // var: "MULTIPART_STRICT_ERROR"
#line 2393 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartStrictError());
      }
#line 4411 "seclang-parser.cc"
    break;

  case 291: // var: "MULTIPART_UNMATCHED_BOUNDARY"
#line 2397 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::MultipartUnmatchedBoundary());
      }
#line 4419 "seclang-parser.cc"
    break;

  case 292: // var: "OUTBOUND_DATA_ERROR"
#line 2401 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::OutboundDataError());
      }
#line 4427 "seclang-parser.cc"
    break;

  case 293: // var: "PATH_INFO"
#line 2405 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::PathInfo());
      }
#line 4435 "seclang-parser.cc"
    break;

  case 294: // var: "QUERY_STRING"
#line 2409 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::QueryString());
      }
#line 4443 "seclang-parser.cc"
    break;

  case 295: // var: "REMOTE_ADDR"
#line 2413 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RemoteAddr());
      }
#line 4451 "seclang-parser.cc"
    break;

  case 296: // var: "REMOTE_HOST"
#line 2417 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RemoteHost());
      }
#line 4459 "seclang-parser.cc"
    break;

  case 297: // var: "REMOTE_PORT"
#line 2421 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RemotePort());
      }
#line 4467 "seclang-parser.cc"
    break;

  case 298: // var: "REQBODY_ERROR"
#line 2425 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ReqbodyError());
      }
#line 4475 "seclang-parser.cc"
    break;

  case 299: // var: "REQBODY_ERROR_MSG"
#line 2429 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ReqbodyErrorMsg());
      }
#line 4483 "seclang-parser.cc"
    break;

  case 300: // var: "REQBODY_PROCESSOR"
#line 2433 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ReqbodyProcessor());
      }
#line 4491 "seclang-parser.cc"
    break;

  case 301: // var: "REQBODY_PROCESSOR_ERROR"
#line 2437 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ReqbodyProcessorError());
      }
#line 4499 "seclang-parser.cc"
    break;

  case 302: // var: "REQBODY_PROCESSOR_ERROR_MSG"
#line 2441 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ReqbodyProcessorErrorMsg());
      }
#line 4507 "seclang-parser.cc"
    break;

  case 303: // var: "REQUEST_BASENAME"
#line 2445 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestBasename());
      }
#line 4515 "seclang-parser.cc"
    break;

  case 304: // var: "REQUEST_BODY"
#line 2449 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestBody());
      }
#line 4523 "seclang-parser.cc"
    break;

  case 305: // var: "REQUEST_BODY_LENGTH"
#line 2453 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestBodyLength());
      }
#line 4531 "seclang-parser.cc"
    break;

  case 306: // var: "REQUEST_FILENAME"
#line 2457 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestFilename());
      }
#line 4539 "seclang-parser.cc"
    break;

  case 307: // var: "REQUEST_LINE"
#line 2461 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestLine());
      }
#line 4547 "seclang-parser.cc"
    break;

  case 308: // var: "REQUEST_METHOD"
#line 2465 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestMethod());
      }
#line 4555 "seclang-parser.cc"
    break;

  case 309: // var: "REQUEST_PROTOCOL"
#line 2469 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestProtocol());
      }
#line 4563 "seclang-parser.cc"
    break;

  case 310: // var: "REQUEST_URI"
#line 2473 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestURI());
      }
#line 4571 "seclang-parser.cc"
    break;

  case 311: // var: "REQUEST_URI_RAW"
#line 2477 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::RequestURIRaw());
      }
#line 4579 "seclang-parser.cc"
    break;

  case 312: // var: "RESPONSE_BODY"
#line 2481 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ResponseBody());
      }
#line 4587 "seclang-parser.cc"
    break;

  case 313: // var: "RESPONSE_CONTENT_LENGTH"
#line 2485 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ResponseContentLength());
      }
#line 4595 "seclang-parser.cc"
    break;

  case 314: // var: "RESPONSE_PROTOCOL"
#line 2489 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ResponseProtocol());
      }
#line 4603 "seclang-parser.cc"
    break;

  case 315: // var: "RESPONSE_STATUS"
#line 2493 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ResponseStatus());
      }
#line 4611 "seclang-parser.cc"
    break;

  case 316: // var: "SERVER_ADDR"
#line 2497 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ServerAddr());
      }
#line 4619 "seclang-parser.cc"
    break;

  case 317: // var: "SERVER_NAME"
#line 2501 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ServerName());
      }
#line 4627 "seclang-parser.cc"
    break;

  case 318: // var: "SERVER_PORT"
#line 2505 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::ServerPort());
      }
#line 4635 "seclang-parser.cc"
    break;

  case 319: // var: "SESSIONID"
#line 2509 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::SessionID());
      }
#line 4643 "seclang-parser.cc"
    break;

  case 320: // var: "UNIQUE_ID"
#line 2513 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::UniqueID());
      }
#line 4651 "seclang-parser.cc"
    break;

  case 321: // var: "URLENCODED_ERROR"
#line 2517 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::UrlEncodedError());
      }
#line 4659 "seclang-parser.cc"
    break;

  case 322: // var: "USERID"
#line 2521 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::UserID());
      }
#line 4667 "seclang-parser.cc"
    break;

  case 323: // var: "VARIABLE_STATUS"
#line 2525 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Status());
      }
#line 4675 "seclang-parser.cc"
    break;

  case 324: // var: "VARIABLE_STATUS_LINE"
#line 2529 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::Status());
      }
#line 4683 "seclang-parser.cc"
    break;

  case 325: // var: "WEBAPPID"
#line 2533 "seclang-parser.yy"
      {
        VARIABLE_CONTAINER(yylhs.value.as < std::unique_ptr<Variable> > (), new variables::WebAppId());
      }
#line 4691 "seclang-parser.cc"
    break;

  case 326: // var: "RUN_TIME_VAR_DUR"
#line 2537 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Duration(name));
        yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4702 "seclang-parser.cc"
    break;

  case 327: // var: "RUN_TIME_VAR_BLD"
#line 2545 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new ModsecBuild(name));
        yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4713 "seclang-parser.cc"
    break;

  case 328: // var: "RUN_TIME_VAR_HSV"
#line 2552 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new HighestSeverity(name));
        yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4724 "seclang-parser.cc"
    break;

  case 329: // var: "RUN_TIME_VAR_REMOTE_USER"
#line 2559 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new RemoteUser(name));
        yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4735 "seclang-parser.cc"
    break;

  case 330: // var: "RUN_TIME_VAR_TIME"
#line 2566 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Time(name));
        yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4746 "seclang-parser.cc"
    break;

  case 331: // var: "RUN_TIME_VAR_TIME_DAY"
#line 2573 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeDay(name));
        yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4757 "seclang-parser.cc"
    break;

  case 332: // var: "RUN_TIME_VAR_TIME_EPOCH"
#line 2580 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeEpoch(name));
        yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4768 "seclang-parser.cc"
    break;

  case 333: // var: "RUN_TIME_VAR_TIME_HOUR"
#line 2587 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeHour(name));
        yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4779 "seclang-parser.cc"
    break;

  case 334: // var: "RUN_TIME_VAR_TIME_MIN"
#line 2594 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMin(name));
        yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4790 "seclang-parser.cc"
    break;

  case 335: // var: "RUN_TIME_VAR_TIME_MON"
#line 2601 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMon(name));
        yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4801 "seclang-parser.cc"
    break;

  case 336: // var: "RUN_TIME_VAR_TIME_SEC"
#line 2608 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
            std::unique_ptr<Variable> c(new TimeSec(name));
            yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4812 "seclang-parser.cc"
    break;

  case 337: // var: "RUN_TIME_VAR_TIME_WDAY"
#line 2615 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeWDay(name));
        yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4823 "seclang-parser.cc"
    break;

  case 338: // var: "RUN_TIME_VAR_TIME_YEAR"
#line 2622 "seclang-parser.yy"
      {
        std::string name(yystack_[0].value.as < std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeYear(name));
        yylhs.value.as < std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4834 "seclang-parser.cc"
    break;

  case 339: // act: "Accuracy"
#line 2632 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Accuracy(yystack_[0].value.as < std::string > ()));
      }
#line 4842 "seclang-parser.cc"
    break;

  case 340: // act: "Allow"
#line 2636 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::disruptive::Allow(yystack_[0].value.as < std::string > ()));
      }
#line 4850 "seclang-parser.cc"
    break;

  case 341: // act: "Append"
#line 2640 "seclang-parser.yy"
      {
        ACTION_NOT_SUPPORTED("Append", yystack_[1].location);
      }
#line 4858 "seclang-parser.cc"
    break;

  case 342: // act: "AuditLog"
#line 2644 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::AuditLog(yystack_[0].value.as < std::string > ()));
      }
#line 4866 "seclang-parser.cc"
    break;

  case 343: // act: "Block"
#line 2648 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Block(yystack_[0].value.as < std::string > ()));
      }
#line 4874 "seclang-parser.cc"
    break;

  case 344: // act: "Capture"
#line 2652 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Capture(yystack_[0].value.as < std::string > ()));
      }
#line 4882 "seclang-parser.cc"
    break;

  case 345: // act: "Chain"
#line 2656 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Chain(yystack_[0].value.as < std::string > ()));
      }
#line 4890 "seclang-parser.cc"
    break;

  case 346: // act: "ACTION_CTL_AUDIT_ENGINE" "CONFIG_VALUE_ON"
#line 2660 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::AuditEngine("ctl:auditengine=on"));
        driver.m_auditLog->setCtlAuditEngineActive();
      }
#line 4899 "seclang-parser.cc"
    break;

  case 347: // act: "ACTION_CTL_AUDIT_ENGINE" "CONFIG_VALUE_OFF"
#line 2665 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::AuditEngine("ctl:auditengine=off"));
      }
#line 4907 "seclang-parser.cc"
    break;

  case 348: // act: "ACTION_CTL_AUDIT_ENGINE" "CONFIG_VALUE_RELEVANT_ONLY"
#line 2669 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::AuditEngine("ctl:auditengine=relevantonly"));
        driver.m_auditLog->setCtlAuditEngineActive();
      }
#line 4916 "seclang-parser.cc"
    break;

  case 349: // act: "ACTION_CTL_AUDIT_LOG_PARTS"
#line 2674 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::AuditLogParts(yystack_[0].value.as < std::string > ()));
      }
#line 4924 "seclang-parser.cc"
    break;

  case 350: // act: "ACTION_CTL_BDY_JSON"
#line 2678 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorJSON(yystack_[0].value.as < std::string > ()));
      }
#line 4932 "seclang-parser.cc"
    break;

  case 351: // act: "ACTION_CTL_BDY_XML"
#line 2682 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorXML(yystack_[0].value.as < std::string > ()));
      }
#line 4940 "seclang-parser.cc"
    break;

  case 352: // act: "ACTION_CTL_BDY_URLENCODED"
#line 2686 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorURLENCODED(yystack_[0].value.as < std::string > ()));
      }
#line 4948 "seclang-parser.cc"
    break;

  case 353: // act: "ACTION_CTL_FORCE_REQ_BODY_VAR" "CONFIG_VALUE_ON"
#line 2690 "seclang-parser.yy"
      {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as < std::string > ()));
      }
#line 4957 "seclang-parser.cc"
    break;

  case 354: // act: "ACTION_CTL_FORCE_REQ_BODY_VAR" "CONFIG_VALUE_OFF"
#line 2695 "seclang-parser.yy"
      {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as < std::string > ()));
      }
#line 4966 "seclang-parser.cc"
    break;

  case 355: // act: "ACTION_CTL_REQUEST_BODY_ACCESS" "CONFIG_VALUE_ON"
#line 2700 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as < std::string > () + "true"));
      }
#line 4974 "seclang-parser.cc"
    break;

  case 356: // act: "ACTION_CTL_REQUEST_BODY_ACCESS" "CONFIG_VALUE_OFF"
#line 2704 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as < std::string > () + "false"));
      }
#line 4982 "seclang-parser.cc"
    break;

  case 357: // act: "ACTION_CTL_RULE_ENGINE" "CONFIG_VALUE_ON"
#line 2708 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=on"));
      }
#line 4990 "seclang-parser.cc"
    break;

  case 358: // act: "ACTION_CTL_RULE_ENGINE" "CONFIG_VALUE_OFF"
#line 2712 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=off"));
      }
#line 4998 "seclang-parser.cc"
    break;

  case 359: // act: "ACTION_CTL_RULE_ENGINE" "CONFIG_VALUE_DETC"
#line 2716 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=detectiononly"));
      }
#line 5006 "seclang-parser.cc"
    break;

  case 360: // act: "ACTION_CTL_RULE_REMOVE_BY_ID"
#line 2720 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveById(yystack_[0].value.as < std::string > ()));
      }
#line 5014 "seclang-parser.cc"
    break;

  case 361: // act: "ACTION_CTL_RULE_REMOVE_BY_TAG"
#line 2724 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveByTag(yystack_[0].value.as < std::string > ()));
      }
#line 5022 "seclang-parser.cc"
    break;

  case 362: // act: "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
#line 2728 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetById(yystack_[0].value.as < std::string > ()));
      }
#line 5030 "seclang-parser.cc"
    break;

  case 363: // act: "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
#line 2732 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetByTag(yystack_[0].value.as < std::string > ()));
      }
#line 5038 "seclang-parser.cc"
    break;

  case 364: // act: "Deny"
#line 2736 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::disruptive::Deny(yystack_[0].value.as < std::string > ()));
      }
#line 5046 "seclang-parser.cc"
    break;

  case 365: // act: "DeprecateVar"
#line 2740 "seclang-parser.yy"
      {
        ACTION_NOT_SUPPORTED("DeprecateVar", yystack_[1].location);
      }
#line 5054 "seclang-parser.cc"
    break;

  case 366: // act: "Drop"
#line 2744 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::disruptive::Drop(yystack_[0].value.as < std::string > ()));
      }
#line 5062 "seclang-parser.cc"
    break;

  case 367: // act: "Exec"
#line 2748 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Exec(yystack_[0].value.as < std::string > ()));
      }
#line 5070 "seclang-parser.cc"
    break;

  case 368: // act: "ExpireVar" run_time_string
#line 2752 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::ExpireVar(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5078 "seclang-parser.cc"
    break;

  case 369: // act: "Id"
#line 2756 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::RuleId(yystack_[0].value.as < std::string > ()));
      }
#line 5086 "seclang-parser.cc"
    break;

  case 370: // act: "InitCol" run_time_string
#line 2760 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::InitCol(yystack_[1].value.as < std::string > (), std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5094 "seclang-parser.cc"
    break;

  case 371: // act: "LogData" run_time_string
#line 2764 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::LogData(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5102 "seclang-parser.cc"
    break;

  case 372: // act: "Log"
#line 2768 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Log(yystack_[0].value.as < std::string > ()));
      }
#line 5110 "seclang-parser.cc"
    break;

  case 373: // act: "Maturity"
#line 2772 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Maturity(yystack_[0].value.as < std::string > ()));
      }
#line 5118 "seclang-parser.cc"
    break;

  case 374: // act: "Msg" run_time_string
#line 2776 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Msg(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5126 "seclang-parser.cc"
    break;

  case 375: // act: "MultiMatch"
#line 2780 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::MultiMatch(yystack_[0].value.as < std::string > ()));
      }
#line 5134 "seclang-parser.cc"
    break;

  case 376: // act: "NoAuditLog"
#line 2784 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::NoAuditLog(yystack_[0].value.as < std::string > ()));
      }
#line 5142 "seclang-parser.cc"
    break;

  case 377: // act: "NoLog"
#line 2788 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::NoLog(yystack_[0].value.as < std::string > ()));
      }
#line 5150 "seclang-parser.cc"
    break;

  case 378: // act: "Pass"
#line 2792 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::disruptive::Pass(yystack_[0].value.as < std::string > ()));
      }
#line 5158 "seclang-parser.cc"
    break;

  case 379: // act: "Pause"
#line 2796 "seclang-parser.yy"
      {
        ACTION_NOT_SUPPORTED("Pause", yystack_[1].location);
      }
#line 5166 "seclang-parser.cc"
    break;

  case 380: // act: "Phase"
#line 2800 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Phase(yystack_[0].value.as < std::string > ()));
      }
#line 5174 "seclang-parser.cc"
    break;

  case 381: // act: "Prepend"
#line 2804 "seclang-parser.yy"
      {
        ACTION_NOT_SUPPORTED("Prepend", yystack_[1].location);
      }
#line 5182 "seclang-parser.cc"
    break;

  case 382: // act: "Proxy"
#line 2808 "seclang-parser.yy"
      {
        ACTION_NOT_SUPPORTED("Proxy", yystack_[1].location);
      }
#line 5190 "seclang-parser.cc"
    break;

  case 383: // act: "Redirect" run_time_string
#line 2812 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::disruptive::Redirect(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5198 "seclang-parser.cc"
    break;

  case 384: // act: "Rev"
#line 2816 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Rev(yystack_[0].value.as < std::string > ()));
      }
#line 5206 "seclang-parser.cc"
    break;

  case 385: // act: "SanitiseArg"
#line 2820 "seclang-parser.yy"
      {
        ACTION_NOT_SUPPORTED("SanitiseArg", yystack_[1].location);
      }
#line 5214 "seclang-parser.cc"
    break;

  case 386: // act: "SanitiseMatched"
#line 2824 "seclang-parser.yy"
      {
        ACTION_NOT_SUPPORTED("SanitiseMatched", yystack_[1].location);
      }
#line 5222 "seclang-parser.cc"
    break;

  case 387: // act: "SanitiseMatchedBytes"
#line 2828 "seclang-parser.yy"
      {
        ACTION_NOT_SUPPORTED("SanitiseMatchedBytes", yystack_[1].location);
      }
#line 5230 "seclang-parser.cc"
    break;

  case 388: // act: "SanitiseRequestHeader"
#line 2832 "seclang-parser.yy"
      {
        ACTION_NOT_SUPPORTED("SanitiseRequestHeader", yystack_[1].location);
      }
#line 5238 "seclang-parser.cc"
    break;

  case 389: // act: "SanitiseResponseHeader"
#line 2836 "seclang-parser.yy"
      {
        ACTION_NOT_SUPPORTED("SanitiseResponseHeader", yystack_[1].location);
      }
#line 5246 "seclang-parser.cc"
    break;

  case 390: // act: "SetEnv" run_time_string
#line 2840 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::SetENV(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5254 "seclang-parser.cc"
    break;

  case 391: // act: "SetRsc" run_time_string
#line 2844 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::SetRSC(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5262 "seclang-parser.cc"
    break;

  case 392: // act: "SetSid" run_time_string
#line 2848 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::SetSID(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5270 "seclang-parser.cc"
    break;

  case 393: // act: "SetUID" run_time_string
#line 2852 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::SetUID(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5278 "seclang-parser.cc"
    break;

  case 394: // act: "SetVar" setvar_action
#line 2856 "seclang-parser.yy"
      {
        yylhs.value.as < std::unique_ptr<actions::Action> > () = std::move(yystack_[0].value.as < std::unique_ptr<actions::Action> > ());
      }
#line 5286 "seclang-parser.cc"
    break;

  case 395: // act: "Severity"
#line 2860 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Severity(yystack_[0].value.as < std::string > ()));
      }
#line 5294 "seclang-parser.cc"
    break;

  case 396: // act: "Skip"
#line 2864 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Skip(yystack_[0].value.as < std::string > ()));
      }
#line 5302 "seclang-parser.cc"
    break;

  case 397: // act: "SkipAfter"
#line 2868 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::SkipAfter(yystack_[0].value.as < std::string > ()));
      }
#line 5310 "seclang-parser.cc"
    break;

  case 398: // act: "Status"
#line 2872 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::data::Status(yystack_[0].value.as < std::string > ()));
      }
#line 5318 "seclang-parser.cc"
    break;

  case 399: // act: "Tag" run_time_string
#line 2876 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Tag(std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5326 "seclang-parser.cc"
    break;

  case 400: // act: "Ver"
#line 2880 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::Ver(yystack_[0].value.as < std::string > ()));
      }
#line 5334 "seclang-parser.cc"
    break;

  case 401: // act: "xmlns"
#line 2884 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::XmlNS(yystack_[0].value.as < std::string > ()));
      }
#line 5342 "seclang-parser.cc"
    break;

  case 402: // act: "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
#line 2888 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::ParityZero7bit(yystack_[0].value.as < std::string > ()));
      }
#line 5350 "seclang-parser.cc"
    break;

  case 403: // act: "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
#line 2892 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::ParityOdd7bit(yystack_[0].value.as < std::string > ()));
      }
#line 5358 "seclang-parser.cc"
    break;

  case 404: // act: "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
#line 2896 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::ParityEven7bit(yystack_[0].value.as < std::string > ()));
      }
#line 5366 "seclang-parser.cc"
    break;

  case 405: // act: "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
#line 2900 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::SqlHexDecode(yystack_[0].value.as < std::string > ()));
      }
#line 5374 "seclang-parser.cc"
    break;

  case 406: // act: "ACTION_TRANSFORMATION_BASE_64_ENCODE"
#line 2904 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::Base64Encode(yystack_[0].value.as < std::string > ()));
      }
#line 5382 "seclang-parser.cc"
    break;

  case 407: // act: "ACTION_TRANSFORMATION_BASE_64_DECODE"
#line 2908 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::Base64Decode(yystack_[0].value.as < std::string > ()));
      }
#line 5390 "seclang-parser.cc"
    break;

  case 408: // act: "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
#line 2912 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::Base64DecodeExt(yystack_[0].value.as < std::string > ()));
      }
#line 5398 "seclang-parser.cc"
    break;

  case 409: // act: "ACTION_TRANSFORMATION_CMD_LINE"
#line 2916 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::CmdLine(yystack_[0].value.as < std::string > ()));
      }
#line 5406 "seclang-parser.cc"
    break;

  case 410: // act: "ACTION_TRANSFORMATION_SHA1"
#line 2920 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::Sha1(yystack_[0].value.as < std::string > ()));
      }
#line 5414 "seclang-parser.cc"
    break;

  case 411: // act: "ACTION_TRANSFORMATION_MD5"
#line 2924 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::Md5(yystack_[0].value.as < std::string > ()));
      }
#line 5422 "seclang-parser.cc"
    break;

  case 412: // act: "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
#line 2928 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::EscapeSeqDecode(yystack_[0].value.as < std::string > ()));
      }
#line 5430 "seclang-parser.cc"
    break;

  case 413: // act: "ACTION_TRANSFORMATION_HEX_ENCODE"
#line 2932 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::HexEncode(yystack_[0].value.as < std::string > ()));
      }
#line 5438 "seclang-parser.cc"
    break;

  case 414: // act: "ACTION_TRANSFORMATION_HEX_DECODE"
#line 2936 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::HexDecode(yystack_[0].value.as < std::string > ()));
      }
#line 5446 "seclang-parser.cc"
    break;

  case 415: // act: "ACTION_TRANSFORMATION_LOWERCASE"
#line 2940 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::LowerCase(yystack_[0].value.as < std::string > ()));
      }
#line 5454 "seclang-parser.cc"
    break;

  case 416: // act: "ACTION_TRANSFORMATION_UPPERCASE"
#line 2944 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::UpperCase(yystack_[0].value.as < std::string > ()));
      }
#line 5462 "seclang-parser.cc"
    break;

  case 417: // act: "ACTION_TRANSFORMATION_URL_DECODE_UNI"
#line 2948 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecodeUni(yystack_[0].value.as < std::string > ()));
      }
#line 5470 "seclang-parser.cc"
    break;

  case 418: // act: "ACTION_TRANSFORMATION_URL_DECODE"
#line 2952 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecode(yystack_[0].value.as < std::string > ()));
      }
#line 5478 "seclang-parser.cc"
    break;

  case 419: // act: "ACTION_TRANSFORMATION_URL_ENCODE"
#line 2956 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::UrlEncode(yystack_[0].value.as < std::string > ()));
      }
#line 5486 "seclang-parser.cc"
    break;

  case 420: // act: "ACTION_TRANSFORMATION_NONE"
#line 2960 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::None(yystack_[0].value.as < std::string > ()));
      }
#line 5494 "seclang-parser.cc"
    break;

  case 421: // act: "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
#line 2964 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::CompressWhitespace(yystack_[0].value.as < std::string > ()));
      }
#line 5502 "seclang-parser.cc"
    break;

  case 422: // act: "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
#line 2968 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveWhitespace(yystack_[0].value.as < std::string > ()));
      }
#line 5510 "seclang-parser.cc"
    break;

  case 423: // act: "ACTION_TRANSFORMATION_REPLACE_NULLS"
#line 2972 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceNulls(yystack_[0].value.as < std::string > ()));
      }
#line 5518 "seclang-parser.cc"
    break;

  case 424: // act: "ACTION_TRANSFORMATION_REMOVE_NULLS"
#line 2976 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveNulls(yystack_[0].value.as < std::string > ()));
      }
#line 5526 "seclang-parser.cc"
    break;

  case 425: // act: "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
#line 2980 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::HtmlEntityDecode(yystack_[0].value.as < std::string > ()));
      }
#line 5534 "seclang-parser.cc"
    break;

  case 426: // act: "ACTION_TRANSFORMATION_JS_DECODE"
#line 2984 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::JsDecode(yystack_[0].value.as < std::string > ()));
      }
#line 5542 "seclang-parser.cc"
    break;

  case 427: // act: "ACTION_TRANSFORMATION_CSS_DECODE"
#line 2988 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::CssDecode(yystack_[0].value.as < std::string > ()));
      }
#line 5550 "seclang-parser.cc"
    break;

  case 428: // act: "ACTION_TRANSFORMATION_TRIM"
#line 2992 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::Trim(yystack_[0].value.as < std::string > ()));
      }
#line 5558 "seclang-parser.cc"
    break;

  case 429: // act: "ACTION_TRANSFORMATION_TRIM_LEFT"
#line 2996 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::TrimLeft(yystack_[0].value.as < std::string > ()));
      }
#line 5566 "seclang-parser.cc"
    break;

  case 430: // act: "ACTION_TRANSFORMATION_TRIM_RIGHT"
#line 3000 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::TrimRight(yystack_[0].value.as < std::string > ()));
      }
#line 5574 "seclang-parser.cc"
    break;

  case 431: // act: "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
#line 3004 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePathWin(yystack_[0].value.as < std::string > ()));
      }
#line 5582 "seclang-parser.cc"
    break;

  case 432: // act: "ACTION_TRANSFORMATION_NORMALISE_PATH"
#line 3008 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePath(yystack_[0].value.as < std::string > ()));
      }
#line 5590 "seclang-parser.cc"
    break;

  case 433: // act: "ACTION_TRANSFORMATION_LENGTH"
#line 3012 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::Length(yystack_[0].value.as < std::string > ()));
      }
#line 5598 "seclang-parser.cc"
    break;

  case 434: // act: "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
#line 3016 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::Utf8ToUnicode(yystack_[0].value.as < std::string > ()));
      }
#line 5606 "seclang-parser.cc"
    break;

  case 435: // act: "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
#line 3020 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveCommentsChar(yystack_[0].value.as < std::string > ()));
      }
#line 5614 "seclang-parser.cc"
    break;

  case 436: // act: "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
#line 3024 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveComments(yystack_[0].value.as < std::string > ()));
      }
#line 5622 "seclang-parser.cc"
    break;

  case 437: // act: "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
#line 3028 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceComments(yystack_[0].value.as < std::string > ()));
      }
#line 5630 "seclang-parser.cc"
    break;

  case 438: // setvar_action: "NOT" var
#line 3035 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::unsetOperation, std::move(yystack_[0].value.as < std::unique_ptr<Variable> > ())));
      }
#line 5638 "seclang-parser.cc"
    break;

  case 439: // setvar_action: var
#line 3039 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setToOneOperation, std::move(yystack_[0].value.as < std::unique_ptr<Variable> > ())));
      }
#line 5646 "seclang-parser.cc"
    break;

  case 440: // setvar_action: var SETVAR_OPERATION_EQUALS run_time_string
#line 3043 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setOperation, std::move(yystack_[2].value.as < std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5654 "seclang-parser.cc"
    break;

  case 441: // setvar_action: var SETVAR_OPERATION_EQUALS_PLUS run_time_string
#line 3047 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::sumAndSetOperation, std::move(yystack_[2].value.as < std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5662 "seclang-parser.cc"
    break;

  case 442: // setvar_action: var SETVAR_OPERATION_EQUALS_MINUS run_time_string
#line 3051 "seclang-parser.yy"
      {
        ACTION_CONTAINER(yylhs.value.as < std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::substractAndSetOperation, std::move(yystack_[2].value.as < std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as < std::unique_ptr<RunTimeString> > ())));
      }
#line 5670 "seclang-parser.cc"
    break;

  case 443: // run_time_string: run_time_string "FREE_TEXT_QUOTE_MACRO_EXPANSION"
#line 3058 "seclang-parser.yy"
      {
        yystack_[1].value.as < std::unique_ptr<RunTimeString> > ()->appendText(yystack_[0].value.as < std::string > ());
        yylhs.value.as < std::unique_ptr<RunTimeString> > () = std::move(yystack_[1].value.as < std::unique_ptr<RunTimeString> > ());
      }
#line 5679 "seclang-parser.cc"
    break;

  case 444: // run_time_string: run_time_string var
#line 3063 "seclang-parser.yy"
      {
        yystack_[1].value.as < std::unique_ptr<RunTimeString> > ()->appendVar(std::move(yystack_[0].value.as < std::unique_ptr<Variable> > ()));
        yylhs.value.as < std::unique_ptr<RunTimeString> > () = std::move(yystack_[1].value.as < std::unique_ptr<RunTimeString> > ());
      }
#line 5688 "seclang-parser.cc"
    break;

  case 445: // run_time_string: "FREE_TEXT_QUOTE_MACRO_EXPANSION"
#line 3068 "seclang-parser.yy"
      {
        std::unique_ptr<RunTimeString> r(new RunTimeString());
        r->appendText(yystack_[0].value.as < std::string > ());
        yylhs.value.as < std::unique_ptr<RunTimeString> > () = std::move(r);
      }
#line 5698 "seclang-parser.cc"
    break;

  case 446: // run_time_string: var
#line 3074 "seclang-parser.yy"
      {
        std::unique_ptr<RunTimeString> r(new RunTimeString());
        r->appendVar(std::move(yystack_[0].value.as < std::unique_ptr<Variable> > ()));
        yylhs.value.as < std::unique_ptr<RunTimeString> > () = std::move(r);
      }
#line 5708 "seclang-parser.cc"
    break;


#line 5712 "seclang-parser.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  seclang_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  seclang_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  seclang_parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // seclang_parser::context.
  seclang_parser::context::context (const seclang_parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  seclang_parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  seclang_parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  seclang_parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short seclang_parser::yypact_ninf_ = -424;

  const signed char seclang_parser::yytable_ninf_ = -1;

  const short
  seclang_parser::yypact_[] =
  {
    2803,  -424,  -262,  -424,     3,  -424,  -143,  -424,  -424,  -424,
    -424,  -424,  -272,  -424,  -424,  -424,  -424,  -424,  -279,  -424,
    -424,  -424,   -94,   -92,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,   -90,
    -424,  -424,   -89,  -424,   -88,  -424,   -87,   -82,  -424,  -287,
     -91,   -91,  -424,  -424,  -424,  -424,   -80,  -300,  -424,  -424,
    -424,  1509,  1509,  1509,   -91,  -270,   -78,  -424,  -424,  -424,
     -76,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    1509,   -91,  2947,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  2365,  -258,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -264,  -424,  -424,  -424,  -424,   -74,
     -72,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  2500,
    -424,  2500,  -424,  2500,  -424,  2500,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  2500,  -424,  -424,  -424,  -424,  -424,
    -424,  2500,  2500,  2500,  2500,  -424,  -424,  -424,  -424,  2500,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  3134,  -424,
       0,  -424,  -424,  -424,  -424,  -424,  -424,  2699,  2699,  -304,
    -292,  -187,  -186,  -183,  -182,  -172,  -171,  -168,  -167,  -164,
    -163,  -160,  -159,  -156,  -155,  -152,  -424,  -151,  -148,  -147,
    -144,  -424,  -424,  -141,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -140,  -424,  -424,  -424,  -424,  -424,   463,  -424,  -424,
    -424,  -137,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,   555,   647,   985,  1077,  1169,  -134,
    -133,  1603,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,     2,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  2031,  -424,
    -424,  -424,  -424,  2699,    49,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  2592,  2592,
    2592,  2592,  2592,  2592,  2592,  2592,  2592,  2592,     9,  3134,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,  -424,
    2592,  -424,  -424,  -424,  -424,  2592,  -424,  -424,  2592,  -424,
    -424,  2592,  -424,  -424,  2592,  -424,  -424,  2592,  -424,  -424,
    -424,  -424,     4,  1697,  2166,  2500,  2500,  2500,  -424,  -424,
    2500,  2500,  2500,  -424,  2500,  2500,  2500,  2500,  2500,  2500,
    2500,  2500,  2500,  2500,  2500,  2500,  2500,  2500,  2500,  2500,
    -424,  2500,  2500,  2500,  2500,  -424,  -424,  2500,  2500,  2500,
    2500,  2500,   -91,  -424,  2592,  -424,  2500,  2500,  2500,  -424,
    -424,  -424,  -424,  -424,  2699,  2699,  -424,  -424,  2592,  2592,
    2592,  2592,  2592,  2592,  2592,  2592,  2592,  2592,  2592,  2592,
    2592,  2592,  2592,  2592,  2592,  2592,  2592,  2592,  2592,  2592,
    2592,  2592,  2592,  2592,  2592,  2592,  2592,  2592,  2592,  2592,
    -424,  2592,  2592,  2592,  -424,  -424
  };

  const short
  seclang_parser::yydefact_[] =
  {
       0,     2,     0,   143,     0,    89,     0,    88,    92,    93,
       7,     6,     0,    11,    14,    12,    13,    17,     0,   126,
     125,    94,     0,     0,   102,   103,   104,   105,    99,   127,
     106,   107,   141,   140,   110,   111,   112,   128,   129,     0,
     132,   130,     0,   131,     0,   133,     0,     0,   115,     0,
       0,     0,    80,   152,   153,   154,     0,     0,   118,   120,
     119,     0,     0,     0,     0,     0,     0,    26,    24,    25,
       0,   142,   148,   149,   150,   147,   151,   116,   117,   146,
       0,     0,     0,     4,    74,     5,    98,    97,    15,    16,
      91,    90,     9,    10,     8,    20,    19,    18,    96,    95,
     101,   100,    85,    84,   134,   135,    87,    86,   136,   137,
     114,   113,    83,    81,    82,     0,     0,   339,   340,   341,
     342,   343,   344,   345,     0,   349,   350,   351,   352,     0,
       0,   360,   361,   362,   363,   364,   365,   366,   367,     0,
     369,     0,   372,     0,   373,     0,   375,   376,   377,   378,
     379,   380,   381,   382,     0,   384,   385,   386,   387,   388,
     389,     0,     0,     0,     0,   395,   396,   397,   398,     0,
     406,   407,   408,   409,   421,   427,   412,   413,   414,   425,
     426,   433,   415,   411,   420,   432,   431,   404,   403,   402,
     436,   435,   424,   422,   437,   423,   410,   405,   428,   429,
     430,   416,   419,   418,   417,   434,   400,   401,     0,    77,
      30,    32,    79,   109,   108,   138,   139,     0,     0,   166,
     169,   172,   175,   178,   181,   184,   187,   190,   193,   196,
     199,   202,   205,   208,   211,   214,   267,   256,   217,   253,
     259,   268,   269,   226,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   299,   298,   302,   301,   300,   303,   305,   304,
     306,   262,   307,   308,   309,   311,   310,   230,   312,   313,
     263,   266,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   325,   323,   324,   234,   238,   246,   250,   242,   220,
     223,     0,   327,   326,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   121,   156,   161,   122,   123,
     124,    22,    21,    23,    28,    27,   144,   145,     0,   155,
      78,     1,     3,     0,   439,   394,   359,   358,   357,   347,
     346,   348,   354,   353,   356,   355,   445,   446,   368,   370,
     371,   374,   383,   390,   391,   392,   393,   399,     0,     0,
     163,   162,   164,   165,   167,   168,   170,   171,   173,   174,
     176,   177,   179,   180,   182,   183,   185,   186,   188,   189,
     191,   192,   194,   195,   197,   198,   200,   201,   203,   204,
     206,   207,   209,   210,   212,   213,   254,   255,   215,   216,
     251,   252,   257,   258,   224,   225,   260,   261,   228,   229,
     227,   264,   265,   232,   233,   231,   236,   237,   235,   244,
     245,   243,   248,   249,   247,   240,   241,   239,   218,   219,
     221,   222,     0,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,    76,    33,    35,   438,     0,     0,     0,   443,
     444,    29,    31,   157,     0,     0,   158,    34,    36,    72,
      56,    55,    57,    58,    43,    59,    52,    60,    42,    61,
      62,    63,    64,    65,    66,    67,    53,    68,    69,    70,
      71,    44,    45,    46,    47,    48,    49,    50,    51,    54,
      75,   440,   441,   442,   160,   159
  };

  const short
  seclang_parser::yypgoto_[] =
  {
    -424,  -424,   -67,  -424,   -47,  -184,  -424,  -423,  -424,  -424,
     -49,  -281,   -61,  -334,  -424,  -136
  };

  const short
  seclang_parser::yydefgoto_[] =
  {
       0,    82,    83,    84,   209,   210,   482,   483,    85,   338,
     325,   326,   357,   211,   345,   358
  };

  const short
  seclang_parser::yytable_[] =
  {
     327,   327,   327,   369,   212,   359,   215,   360,   443,   361,
     443,   115,   369,   328,   329,   342,   216,   330,   362,   327,
     112,   497,   113,   114,   368,   363,   364,   365,   366,    95,
     442,   339,    96,   367,   340,   492,    97,    92,    93,   331,
     332,   372,    94,   373,   333,   349,   350,    86,    87,   346,
     351,   347,   348,   374,   344,   375,     0,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,    88,
      89,   420,   486,   487,   488,     0,   370,   371,   376,   378,
     377,   379,   380,   382,   381,   383,    90,    91,   425,   428,
     431,   434,   437,   384,   386,   385,   387,   388,   390,   389,
     391,   392,   394,   393,   395,   396,   398,   397,   399,   400,
     402,   401,   403,   404,   406,   405,   407,   408,   410,   409,
     411,   412,   484,   413,   414,   416,   415,   417,   421,     0,
     422,   438,   440,   439,   441,    98,    99,   100,   101,   102,
     103,   106,   107,   104,   105,   108,   109,   110,   111,   213,
     214,   334,   335,   336,   337,   352,   353,   354,   355,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   485,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,     0,   498,   499,
     500,   501,     0,     0,   502,   503,   504,     0,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   493,   521,   522,   523,   524,   491,
       0,   525,   526,   527,   528,   529,     0,     0,     0,     0,
     531,   532,   533,     0,     0,     0,     0,     0,     0,   490,
       0,     0,     0,     0,   490,     0,     0,   490,     0,     0,
     490,     0,     0,   490,     0,     0,   490,     0,     0,     0,
       0,     0,   496,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   490,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   534,   535,   530,     0,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,     0,
     490,   490,   490,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   356,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,     0,   418,     0,
     419,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   356,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
     423,     0,   424,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   356,     0,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,     0,   426,     0,   427,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   356,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
     429,     0,   430,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   356,     0,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,     0,   432,     0,   433,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   356,     0,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,     0,   435,     0,   436,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   494,   495,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,     0,     0,     0,     0,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,     0,     0,
       0,     0,     0,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     356,     0,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,     0,     0,     0,
       0,   343,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   356,     0,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,     0,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,     0,     0,     1,     0,     0,     0,     2,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   356,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   489,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   341,     4,     0,
       0,     2,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     4,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   115,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,     0,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207
  };

  const short
  seclang_parser::yycheck_[] =
  {
      61,    62,    63,     3,    51,   141,   306,   143,     6,   145,
       6,   102,     3,    62,    63,    82,   316,    64,   154,    80,
     307,   444,   309,   310,   208,   161,   162,   163,   164,   308,
     311,    80,   311,   169,    81,   369,   315,   309,   310,   309,
     310,   345,   314,   347,   314,   309,   310,   309,   310,   307,
     314,   309,   310,   345,   115,   347,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   146,
     147,   287,   103,   104,   105,    -1,   217,   218,   345,   345,
     347,   347,   345,   345,   347,   347,   309,   310,   304,   305,
     306,   307,   308,   345,   345,   347,   347,   345,   345,   347,
     347,   345,   345,   347,   347,   345,   345,   347,   347,   345,
     345,   347,   347,   345,   345,   347,   347,   345,   345,   347,
     347,   345,   338,   347,   345,   345,   347,   347,   345,    -1,
     347,   345,   345,   347,   347,   309,   310,   309,   310,   309,
     310,   309,   310,   312,   313,   312,   313,   309,   310,   309,
     310,   309,   310,   309,   310,   309,   310,   309,   310,   330,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,    -1,   444,   445,
     446,   447,    -1,    -1,   450,   451,   452,    -1,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   330,   471,   472,   473,   474,   330,
      -1,   477,   478,   479,   480,   481,    -1,    -1,    -1,    -1,
     486,   487,   488,    -1,    -1,    -1,    -1,    -1,    -1,   420,
      -1,    -1,    -1,    -1,   425,    -1,    -1,   428,    -1,    -1,
     431,    -1,    -1,   434,    -1,    -1,   437,    -1,    -1,    -1,
      -1,    -1,   443,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   484,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   494,   495,   482,    -1,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,    -1,
     531,   532,   533,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   329,    -1,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,    -1,   345,    -1,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   329,    -1,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
     345,    -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    -1,   345,    -1,   347,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   329,    -1,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
     345,    -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    -1,   345,    -1,   347,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,    -1,   345,    -1,   347,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    -1,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   329,    -1,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,     0,    -1,    -1,    -1,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,
      -1,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   329,    -1,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,   145,    -1,
      -1,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   145,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   102,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239
  };

  const short
  seclang_parser::yystos_[] =
  {
       0,     0,     4,     5,   145,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   349,   350,   351,   356,   309,   310,   146,   147,
     309,   310,   309,   310,   314,   308,   311,   315,   309,   310,
     309,   310,   309,   310,   312,   313,   309,   310,   312,   313,
     309,   310,   307,   309,   310,   102,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   330,   352,
     353,   361,   352,   309,   310,   306,   316,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   358,   359,   360,   358,   358,
     352,   309,   310,   314,   309,   310,   309,   310,   357,   358,
     352,     0,   350,   106,   360,   362,   307,   309,   310,   309,
     310,   314,   309,   310,   309,   310,   329,   360,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   353,     3,
     360,   360,   345,   347,   345,   347,   345,   347,   345,   347,
     345,   347,   345,   347,   345,   347,   345,   347,   345,   347,
     345,   347,   345,   347,   345,   347,   345,   347,   345,   347,
     345,   347,   345,   347,   345,   347,   345,   347,   345,   347,
     345,   347,   345,   347,   345,   347,   345,   347,   345,   347,
     363,   345,   347,   345,   347,   363,   345,   347,   363,   345,
     347,   363,   345,   347,   363,   345,   347,   363,   345,   347,
     345,   347,   359,     6,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   354,   355,   363,   360,   103,   104,   105,   329,
     360,   330,   361,   330,     8,     9,   360,   355,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     352,   363,   363,   363,   360,   360
  };

  const short
  seclang_parser::yyr1_[] =
  {
       0,   348,   349,   349,   349,   350,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   352,
     352,   353,   353,   354,   354,   354,   354,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   357,   358,   358,   359,   359,
     359,   359,   359,   359,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   362,   362,
     362,   362,   362,   363,   363,   363,   363
  };

  const signed char
  seclang_parser::yyr2_[] =
  {
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     2,     2,     3,
       1,     3,     1,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     4,     3,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       2,     2,     1,     1,     1,     2,     2,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       4,     1,     2,     2,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     2,
       1,     2,     2,     2,     1,     2,     2,     2,     1,     2,
       2,     2,     1,     2,     2,     2,     1,     2,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     3,     3,     2,     2,     1,     1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const seclang_parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "\",\"",
  "\"CONFIG_CONTENT_INJECTION\"", "\"CONGIG_DIR_RESPONSE_BODY_MP_CLEAR\"",
  "PIPE", "NEW_LINE", "VAR_COUNT", "VAR_EXCLUSION", "VARIABLE_ARGS",
  "VARIABLE_ARGS_POST", "VARIABLE_ARGS_GET", "VARIABLE_FILES_SIZES",
  "VARIABLE_FILES_NAMES", "VARIABLE_FILES_TMP_CONTENT",
  "VARIABLE_MULTIPART_FILENAME", "VARIABLE_MULTIPART_NAME",
  "VARIABLE_MATCHED_VARS_NAMES", "VARIABLE_MATCHED_VARS", "VARIABLE_FILES",
  "VARIABLE_REQUEST_COOKIES", "VARIABLE_REQUEST_HEADERS",
  "VARIABLE_RESPONSE_HEADERS", "VARIABLE_GEO",
  "VARIABLE_REQUEST_COOKIES_NAMES", "VARIABLE_MULTIPART_PART_HEADERS",
  "VARIABLE_ARGS_COMBINED_SIZE", "VARIABLE_ARGS_GET_NAMES",
  "VARIABLE_RULE", "\"Variable ARGS_NAMES\"", "VARIABLE_ARGS_POST_NAMES",
  "\"AUTH_TYPE\"", "\"FILES_COMBINED_SIZE\"", "\"FILES_TMPNAMES\"",
  "\"FULL_REQUEST\"", "\"FULL_REQUEST_LENGTH\"", "\"INBOUND_DATA_ERROR\"",
  "\"MATCHED_VAR\"", "\"MATCHED_VAR_NAME\"", "\"MSC_PCRE_ERROR\"",
  "\"MSC_PCRE_LIMITS_EXCEEDED\"", "VARIABLE_MULTIPART_BOUNDARY_QUOTED",
  "VARIABLE_MULTIPART_BOUNDARY_WHITESPACE", "\"MULTIPART_CRLF_LF_LINES\"",
  "\"MULTIPART_DATA_AFTER\"", "VARIABLE_MULTIPART_DATA_BEFORE",
  "\"MULTIPART_FILE_LIMIT_EXCEEDED\"", "\"MULTIPART_HEADER_FOLDING\"",
  "\"MULTIPART_INVALID_HEADER_FOLDING\"",
  "VARIABLE_MULTIPART_INVALID_PART", "\"MULTIPART_INVALID_QUOTING\"",
  "VARIABLE_MULTIPART_LF_LINE", "VARIABLE_MULTIPART_MISSING_SEMICOLON",
  "VARIABLE_MULTIPART_SEMICOLON_MISSING", "\"MULTIPART_STRICT_ERROR\"",
  "\"MULTIPART_UNMATCHED_BOUNDARY\"", "\"OUTBOUND_DATA_ERROR\"",
  "\"PATH_INFO\"", "\"QUERY_STRING\"", "\"REMOTE_ADDR\"",
  "\"REMOTE_HOST\"", "\"REMOTE_PORT\"", "\"REQBODY_ERROR_MSG\"",
  "\"REQBODY_ERROR\"", "\"REQBODY_PROCESSOR_ERROR_MSG\"",
  "\"REQBODY_PROCESSOR_ERROR\"", "\"REQBODY_PROCESSOR\"",
  "\"REQUEST_BASENAME\"", "\"REQUEST_BODY_LENGTH\"", "\"REQUEST_BODY\"",
  "\"REQUEST_FILENAME\"", "VARIABLE_REQUEST_HEADERS_NAMES",
  "\"REQUEST_LINE\"", "\"REQUEST_METHOD\"", "\"REQUEST_PROTOCOL\"",
  "\"REQUEST_URI_RAW\"", "\"REQUEST_URI\"", "\"RESOURCE\"",
  "\"RESPONSE_BODY\"", "\"RESPONSE_CONTENT_LENGTH\"",
  "VARIABLE_RESPONSE_CONTENT_TYPE", "VARIABLE_RESPONSE_HEADERS_NAMES",
  "\"RESPONSE_PROTOCOL\"", "\"RESPONSE_STATUS\"", "\"SERVER_ADDR\"",
  "\"SERVER_NAME\"", "\"SERVER_PORT\"", "\"SESSIONID\"", "\"UNIQUE_ID\"",
  "\"URLENCODED_ERROR\"", "\"USERID\"", "\"WEBAPPID\"",
  "\"VARIABLE_STATUS\"", "\"VARIABLE_STATUS_LINE\"", "\"VARIABLE_IP\"",
  "\"VARIABLE_GLOBAL\"", "\"VARIABLE_TX\"", "\"VARIABLE_SESSION\"",
  "\"VARIABLE_USER\"", "\"RUN_TIME_VAR_ENV\"", "\"RUN_TIME_VAR_XML\"",
  "\"SetVar\"", "SETVAR_OPERATION_EQUALS", "SETVAR_OPERATION_EQUALS_PLUS",
  "SETVAR_OPERATION_EQUALS_MINUS", "\"NOT\"", "\"OPERATOR_BEGINS_WITH\"",
  "\"OPERATOR_CONTAINS\"", "\"OPERATOR_CONTAINS_WORD\"",
  "\"OPERATOR_DETECT_SQLI\"", "\"OPERATOR_DETECT_XSS\"",
  "\"OPERATOR_ENDS_WITH\"", "\"OPERATOR_EQ\"", "\"OPERATOR_FUZZY_HASH\"",
  "\"OPERATOR_GEOLOOKUP\"", "\"OPERATOR_GE\"", "\"OPERATOR_GSB_LOOKUP\"",
  "\"OPERATOR_GT\"", "\"OPERATOR_INSPECT_FILE\"",
  "\"OPERATOR_IP_MATCH_FROM_FILE\"", "\"OPERATOR_IP_MATCH\"",
  "\"OPERATOR_LE\"", "\"OPERATOR_LT\"", "\"OPERATOR_PM_FROM_FILE\"",
  "\"OPERATOR_PM\"", "\"OPERATOR_RBL\"", "\"OPERATOR_RSUB\"",
  "\"Operator RX (content only)\"", "\"OPERATOR_RX\"",
  "\"OPERATOR_RX_GLOBAL\"", "\"OPERATOR_STR_EQ\"",
  "\"OPERATOR_STR_MATCH\"", "\"OPERATOR_UNCONDITIONAL_MATCH\"",
  "\"OPERATOR_VALIDATE_BYTE_RANGE\"", "\"OPERATOR_VALIDATE_DTD\"",
  "\"OPERATOR_VALIDATE_HASH\"", "\"OPERATOR_VALIDATE_SCHEMA\"",
  "\"OPERATOR_VALIDATE_URL_ENCODING\"",
  "\"OPERATOR_VALIDATE_UTF8_ENCODING\"", "\"OPERATOR_VERIFY_CC\"",
  "\"OPERATOR_VERIFY_CPF\"", "\"OPERATOR_VERIFY_SSN\"",
  "\"OPERATOR_VERIFY_SVNR\"", "\"OPERATOR_WITHIN\"",
  "CONFIG_DIR_AUDIT_LOG_FMT", "JSON", "NATIVE",
  "\"ACTION_CTL_RULE_ENGINE\"", "\"Accuracy\"", "\"Allow\"", "\"Append\"",
  "\"AuditLog\"", "\"Block\"", "\"Capture\"", "\"Chain\"",
  "\"ACTION_CTL_AUDIT_ENGINE\"", "\"ACTION_CTL_AUDIT_LOG_PARTS\"",
  "\"ACTION_CTL_BDY_JSON\"", "\"ACTION_CTL_BDY_XML\"",
  "\"ACTION_CTL_BDY_URLENCODED\"", "\"ACTION_CTL_FORCE_REQ_BODY_VAR\"",
  "\"ACTION_CTL_REQUEST_BODY_ACCESS\"", "\"ACTION_CTL_RULE_REMOVE_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_BY_TAG\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG\"", "\"Deny\"",
  "\"DeprecateVar\"", "\"Drop\"", "\"Exec\"", "\"ExpireVar\"", "\"Id\"",
  "\"InitCol\"", "\"Log\"", "\"LogData\"", "\"Maturity\"", "\"Msg\"",
  "\"MultiMatch\"", "\"NoAuditLog\"", "\"NoLog\"", "\"Pass\"", "\"Pause\"",
  "\"Phase\"", "\"Prepend\"", "\"Proxy\"", "\"Redirect\"", "\"Rev\"",
  "\"SanitiseArg\"", "\"SanitiseMatched\"", "\"SanitiseMatchedBytes\"",
  "\"SanitiseRequestHeader\"", "\"SanitiseResponseHeader\"", "\"SetEnv\"",
  "\"SetRsc\"", "\"SetSid\"", "\"SetUID\"", "\"Severity\"", "\"Skip\"",
  "\"SkipAfter\"", "\"Status\"", "\"Tag\"",
  "\"ACTION_TRANSFORMATION_BASE_64_ENCODE\"",
  "\"ACTION_TRANSFORMATION_BASE_64_DECODE\"",
  "\"ACTION_TRANSFORMATION_BASE_64_DECODE_EXT\"",
  "\"ACTION_TRANSFORMATION_CMD_LINE\"",
  "\"ACTION_TRANSFORMATION_COMPRESS_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_CSS_DECODE\"",
  "\"ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE\"",
  "\"ACTION_TRANSFORMATION_HEX_ENCODE\"",
  "\"ACTION_TRANSFORMATION_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_HTML_ENTITY_DECODE\"",
  "\"ACTION_TRANSFORMATION_JS_DECODE\"",
  "\"ACTION_TRANSFORMATION_LENGTH\"",
  "\"ACTION_TRANSFORMATION_LOWERCASE\"", "\"ACTION_TRANSFORMATION_MD5\"",
  "\"ACTION_TRANSFORMATION_NONE\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH_WIN\"",
  "\"ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ODD_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR\"",
  "\"ACTION_TRANSFORMATION_REMOVE_NULLS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_REPLACE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REPLACE_NULLS\"",
  "\"ACTION_TRANSFORMATION_SHA1\"",
  "\"ACTION_TRANSFORMATION_SQL_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_TRIM\"", "\"ACTION_TRANSFORMATION_TRIM_LEFT\"",
  "\"ACTION_TRANSFORMATION_TRIM_RIGHT\"",
  "\"ACTION_TRANSFORMATION_UPPERCASE\"",
  "\"ACTION_TRANSFORMATION_URL_ENCODE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE_UNI\"",
  "\"ACTION_TRANSFORMATION_UTF8_TO_UNICODE\"", "\"Ver\"", "\"xmlns\"",
  "\"CONFIG_COMPONENT_SIG\"", "\"CONFIG_CONN_ENGINE\"",
  "\"CONFIG_SEC_ARGUMENT_SEPARATOR\"", "\"CONFIG_SEC_WEB_APP_ID\"",
  "\"CONFIG_SEC_SERVER_SIG\"", "\"CONFIG_DIR_AUDIT_DIR\"",
  "\"CONFIG_DIR_AUDIT_DIR_MOD\"", "\"CONFIG_DIR_AUDIT_ENG\"",
  "\"CONFIG_DIR_AUDIT_FLE_MOD\"", "\"CONFIG_DIR_AUDIT_LOG\"",
  "\"CONFIG_DIR_AUDIT_LOG2\"", "\"CONFIG_DIR_AUDIT_LOG_P\"",
  "\"CONFIG_DIR_AUDIT_STS\"", "\"CONFIG_DIR_AUDIT_TPE\"",
  "\"CONFIG_DIR_DEBUG_LOG\"", "\"CONFIG_DIR_DEBUG_LVL\"",
  "\"CONFIG_SEC_CACHE_TRANSFORMATIONS\"",
  "\"CONFIG_SEC_DISABLE_BACKEND_COMPRESS\"", "\"CONFIG_SEC_HASH_ENGINE\"",
  "\"CONFIG_SEC_HASH_KEY\"", "\"CONFIG_SEC_HASH_PARAM\"",
  "\"CONFIG_SEC_HASH_METHOD_RX\"", "\"CONFIG_SEC_HASH_METHOD_PM\"",
  "\"CONFIG_SEC_CHROOT_DIR\"", "\"CONFIG_DIR_GEO_DB\"",
  "\"CONFIG_DIR_GSB_DB\"", "\"CONFIG_SEC_GUARDIAN_LOG\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION\"",
  "\"CONFIG_SEC_CONN_R_STATE_LIMIT\"", "\"CONFIG_SEC_CONN_W_STATE_LIMIT\"",
  "\"CONFIG_SEC_SENSOR_ID\"", "\"CONFIG_DIR_ARGS_LIMIT\"",
  "\"CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT\"", "\"CONFIG_DIR_REQ_BODY\"",
  "\"CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT\"",
  "\"CONFIG_DIR_REQ_BODY_LIMIT\"", "\"CONFIG_DIR_REQ_BODY_LIMIT_ACTION\"",
  "\"CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT\"", "\"CONFIG_DIR_RES_BODY\"",
  "\"CONFIG_DIR_RES_BODY_LIMIT\"", "\"CONFIG_DIR_RES_BODY_LIMIT_ACTION\"",
  "\"CONFIG_SEC_RULE_INHERITANCE\"", "\"CONFIG_SEC_RULE_PERF_TIME\"",
  "\"CONFIG_DIR_RULE_ENG\"", "\"CONFIG_DIR_SEC_ACTION\"",
  "\"CONFIG_DIR_SEC_DEFAULT_ACTION\"", "\"CONFIG_DIR_SEC_MARKER\"",
  "\"CONFIG_DIR_UNICODE_MAP_FILE\"", "\"CONFIG_DIR_UNICODE_CODE_PAGE\"",
  "\"CONFIG_SEC_COLLECTION_TIMEOUT\"", "\"CONFIG_SEC_HTTP_BLKEY\"",
  "\"CONFIG_SEC_INTERCEPT_ON_ERROR\"",
  "\"CONFIG_SEC_REMOTE_RULES_FAIL_ACTION\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_ID\"", "\"CONFIG_SEC_RULE_REMOVE_BY_MSG\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_TAG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID\"",
  "\"CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID\"",
  "\"CONFIG_UPDLOAD_KEEP_FILES\"", "\"CONFIG_UPDLOAD_SAVE_TMP_FILES\"",
  "\"CONFIG_UPLOAD_DIR\"", "\"CONFIG_UPLOAD_FILE_LIMIT\"",
  "\"CONFIG_UPLOAD_FILE_MODE\"", "\"CONFIG_VALUE_ABORT\"",
  "\"CONFIG_VALUE_DETC\"", "\"CONFIG_VALUE_HTTPS\"",
  "\"CONFIG_VALUE_OFF\"", "\"CONFIG_VALUE_ON\"",
  "\"CONFIG_VALUE_PARALLEL\"", "\"CONFIG_VALUE_PROCESS_PARTIAL\"",
  "\"CONFIG_VALUE_REJECT\"", "\"CONFIG_VALUE_RELEVANT_ONLY\"",
  "\"CONFIG_VALUE_SERIAL\"", "\"CONFIG_VALUE_WARN\"",
  "\"CONFIG_XML_EXTERNAL_ENTITY\"", "\"CONGIG_DIR_RESPONSE_BODY_MP\"",
  "\"CONGIG_DIR_SEC_ARG_SEP\"", "\"CONGIG_DIR_SEC_COOKIE_FORMAT\"",
  "\"CONFIG_SEC_COOKIEV0_SEPARATOR\"", "\"CONGIG_DIR_SEC_DATA_DIR\"",
  "\"CONGIG_DIR_SEC_STATUS_ENGINE\"",
  "\"CONFIG_SEC_STREAM_IN_BODY_INSPECTION\"",
  "\"CONFIG_SEC_STREAM_OUT_BODY_INSPECTION\"",
  "\"CONGIG_DIR_SEC_TMP_DIR\"", "\"DIRECTIVE\"",
  "\"DIRECTIVE_SECRULESCRIPT\"", "\"FREE_TEXT_QUOTE_MACRO_EXPANSION\"",
  "\"QUOTATION_MARK\"", "\"RUN_TIME_VAR_BLD\"", "\"RUN_TIME_VAR_DUR\"",
  "\"RUN_TIME_VAR_HSV\"", "\"RUN_TIME_VAR_REMOTE_USER\"",
  "\"RUN_TIME_VAR_TIME\"", "\"RUN_TIME_VAR_TIME_DAY\"",
  "\"RUN_TIME_VAR_TIME_EPOCH\"", "\"RUN_TIME_VAR_TIME_HOUR\"",
  "\"RUN_TIME_VAR_TIME_MIN\"", "\"RUN_TIME_VAR_TIME_MON\"",
  "\"RUN_TIME_VAR_TIME_SEC\"", "\"RUN_TIME_VAR_TIME_WDAY\"",
  "\"RUN_TIME_VAR_TIME_YEAR\"", "\"VARIABLE\"", "\"Dictionary element\"",
  "\"Dictionary element, with equals\"",
  "\"Dictionary element, selected by regexp\"", "$accept", "input", "line",
  "audit_log", "actions", "actions_may_quoted", "op", "op_before_init",
  "expression", "variables", "variables_pre_process",
  "variables_may_be_quoted", "var", "act", "setvar_action",
  "run_time_string", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  seclang_parser::yyrline_[] =
  {
       0,   721,   721,   725,   726,   729,   734,   740,   746,   750,
     754,   760,   766,   772,   778,   783,   788,   794,   801,   805,
     809,   815,   819,   823,   828,   833,   838,   843,   847,   854,
     858,   865,   871,   881,   890,   900,   909,   922,   926,   930,
     934,   938,   942,   946,   950,   954,   958,   963,   967,   971,
     975,   979,   983,   988,   993,   997,  1001,  1005,  1009,  1013,
    1017,  1021,  1025,  1029,  1033,  1037,  1041,  1045,  1049,  1053,
    1057,  1061,  1065,  1069,  1083,  1084,  1115,  1134,  1154,  1183,
    1240,  1247,  1251,  1255,  1259,  1263,  1267,  1271,  1275,  1284,
    1288,  1293,  1296,  1301,  1306,  1311,  1316,  1319,  1324,  1327,
    1332,  1337,  1340,  1345,  1350,  1355,  1360,  1365,  1370,  1375,
    1378,  1383,  1388,  1393,  1398,  1401,  1406,  1411,  1416,  1429,
    1442,  1455,  1468,  1481,  1507,  1535,  1547,  1567,  1594,  1599,
    1605,  1610,  1615,  1624,  1629,  1633,  1637,  1641,  1645,  1649,
    1653,  1658,  1663,  1675,  1681,  1685,  1689,  1700,  1709,  1710,
    1717,  1722,  1727,  1781,  1788,  1796,  1833,  1837,  1844,  1849,
    1855,  1861,  1867,  1874,  1884,  1888,  1892,  1896,  1900,  1904,
    1908,  1912,  1916,  1920,  1924,  1928,  1932,  1936,  1940,  1944,
    1948,  1952,  1956,  1960,  1964,  1968,  1972,  1976,  1980,  1984,
    1988,  1992,  1996,  2000,  2004,  2008,  2012,  2016,  2020,  2024,
    2028,  2032,  2036,  2040,  2044,  2048,  2052,  2056,  2060,  2064,
    2068,  2072,  2076,  2080,  2084,  2088,  2092,  2096,  2100,  2104,
    2108,  2112,  2116,  2120,  2124,  2128,  2132,  2136,  2140,  2144,
    2148,  2152,  2156,  2160,  2164,  2168,  2172,  2176,  2180,  2184,
    2188,  2192,  2196,  2200,  2204,  2208,  2212,  2216,  2220,  2224,
    2228,  2232,  2236,  2240,  2244,  2248,  2252,  2257,  2261,  2265,
    2270,  2274,  2278,  2283,  2288,  2292,  2296,  2300,  2304,  2308,
    2312,  2316,  2320,  2324,  2328,  2332,  2336,  2340,  2344,  2348,
    2352,  2356,  2360,  2364,  2368,  2372,  2376,  2380,  2384,  2388,
    2392,  2396,  2400,  2404,  2408,  2412,  2416,  2420,  2424,  2428,
    2432,  2436,  2440,  2444,  2448,  2452,  2456,  2460,  2464,  2468,
    2472,  2476,  2480,  2484,  2488,  2492,  2496,  2500,  2504,  2508,
    2512,  2516,  2520,  2524,  2528,  2532,  2536,  2544,  2551,  2558,
    2565,  2572,  2579,  2586,  2593,  2600,  2607,  2614,  2621,  2631,
    2635,  2639,  2643,  2647,  2651,  2655,  2659,  2664,  2668,  2673,
    2677,  2681,  2685,  2689,  2694,  2699,  2703,  2707,  2711,  2715,
    2719,  2723,  2727,  2731,  2735,  2739,  2743,  2747,  2751,  2755,
    2759,  2763,  2767,  2771,  2775,  2779,  2783,  2787,  2791,  2795,
    2799,  2803,  2807,  2811,  2815,  2819,  2823,  2827,  2831,  2835,
    2839,  2843,  2847,  2851,  2855,  2859,  2863,  2867,  2871,  2875,
    2879,  2883,  2887,  2891,  2895,  2899,  2903,  2907,  2911,  2915,
    2919,  2923,  2927,  2931,  2935,  2939,  2943,  2947,  2951,  2955,
    2959,  2963,  2967,  2971,  2975,  2979,  2983,  2987,  2991,  2995,
    2999,  3003,  3007,  3011,  3015,  3019,  3023,  3027,  3034,  3038,
    3042,  3046,  3050,  3057,  3062,  3067,  3073
  };

  void
  seclang_parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  seclang_parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 7312 "seclang-parser.cc"

#line 3080 "seclang-parser.yy"


void yy::seclang_parser::error (const location_type& l, const std::string& m) {
    driver.error (l, m);
}
