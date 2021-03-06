/******************************************************************************
 * Copyright (c) 2017 Philipp Schubert.
 * All rights reserved. This program and the accompanying materials are made
 * available under the terms of LICENSE.txt.
 *
 * Contributors:
 *     Philipp Schubert and others
 *****************************************************************************/

/*
 * CFG.h
 *
 *  Created on: 07.06.2017
 *      Author: philipp
 */

#ifndef SRC_ANALYSIS_ICFG_CFG_H_
#define SRC_ANALYSIS_ICFG_CFG_H_

#include <string>
#include <utility>
#include <vector>
namespace psr {

template <typename N, typename M> class CFG {
public:
  virtual ~CFG() = default;

  virtual M getMethodOf(N stmt) = 0;

  virtual std::vector<N> getPredsOf(N stmt) = 0;

  virtual std::vector<N> getSuccsOf(N stmt) = 0;

  virtual std::vector<std::pair<N, N>> getAllControlFlowEdges(M fun) = 0;

  virtual std::vector<N> getAllInstructionsOf(M fun) = 0;

  virtual bool isExitStmt(N stmt) = 0;

  virtual bool isStartPoint(N stmt) = 0;

  virtual bool isFallThroughSuccessor(N stmt, N succ) = 0;

  virtual bool isBranchTarget(N stmt, N succ) = 0;

  virtual std::string getStatementId(N stmt) = 0;

  virtual std::string getMethodName(M fun) = 0;
};

} // namespace psr

#endif /* SRC_ANALYSIS_ICFG_CFG_HH_ */
