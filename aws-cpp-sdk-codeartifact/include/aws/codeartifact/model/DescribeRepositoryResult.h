﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/RepositoryDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeArtifact
{
namespace Model
{
  class AWS_CODEARTIFACT_API DescribeRepositoryResult
  {
  public:
    DescribeRepositoryResult();
    DescribeRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A <code>RepositoryDescription</code> object that contains the requested
     * repository information. </p>
     */
    inline const RepositoryDescription& GetRepository() const{ return m_repository; }

    /**
     * <p> A <code>RepositoryDescription</code> object that contains the requested
     * repository information. </p>
     */
    inline void SetRepository(const RepositoryDescription& value) { m_repository = value; }

    /**
     * <p> A <code>RepositoryDescription</code> object that contains the requested
     * repository information. </p>
     */
    inline void SetRepository(RepositoryDescription&& value) { m_repository = std::move(value); }

    /**
     * <p> A <code>RepositoryDescription</code> object that contains the requested
     * repository information. </p>
     */
    inline DescribeRepositoryResult& WithRepository(const RepositoryDescription& value) { SetRepository(value); return *this;}

    /**
     * <p> A <code>RepositoryDescription</code> object that contains the requested
     * repository information. </p>
     */
    inline DescribeRepositoryResult& WithRepository(RepositoryDescription&& value) { SetRepository(std::move(value)); return *this;}

  private:

    RepositoryDescription m_repository;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
