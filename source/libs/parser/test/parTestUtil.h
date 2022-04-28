/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PARSER_TEST_UTIL_H
#define PARSER_TEST_UTIL_H

#include <gtest/gtest.h>

class ParserTestBaseImpl;

class ParserTestBase : public testing::Test {
 public:
  ParserTestBase();
  virtual ~ParserTestBase();

  void useDb(const std::string& acctId, const std::string& db);
  void run(const std::string& sql);

 private:
  std::unique_ptr<ParserTestBaseImpl> impl_;
};

extern bool g_isDump;

#endif  // PARSER_TEST_UTIL_H