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
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_CODEARTIFACT_API GetRepositoryEndpointResult
  {
  public:
    GetRepositoryEndpointResult();
    GetRepositoryEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRepositoryEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline const Aws::String& GetRepositoryEndpoint() const{ return m_repositoryEndpoint; }

    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline void SetRepositoryEndpoint(const Aws::String& value) { m_repositoryEndpoint = value; }

    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline void SetRepositoryEndpoint(Aws::String&& value) { m_repositoryEndpoint = std::move(value); }

    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline void SetRepositoryEndpoint(const char* value) { m_repositoryEndpoint.assign(value); }

    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline GetRepositoryEndpointResult& WithRepositoryEndpoint(const Aws::String& value) { SetRepositoryEndpoint(value); return *this;}

    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline GetRepositoryEndpointResult& WithRepositoryEndpoint(Aws::String&& value) { SetRepositoryEndpoint(std::move(value)); return *this;}

    /**
     * <p> A string that specifies the URL of the returned endpoint. </p>
     */
    inline GetRepositoryEndpointResult& WithRepositoryEndpoint(const char* value) { SetRepositoryEndpoint(value); return *this;}

  private:

    Aws::String m_repositoryEndpoint;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
