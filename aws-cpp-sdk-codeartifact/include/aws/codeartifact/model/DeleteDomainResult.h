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
#include <aws/codeartifact/model/DomainDescription.h>
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
  class AWS_CODEARTIFACT_API DeleteDomainResult
  {
  public:
    DeleteDomainResult();
    DeleteDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Contains information about the deleted domain after processing the request.
     * </p>
     */
    inline const DomainDescription& GetDomain() const{ return m_domain; }

    /**
     * <p> Contains information about the deleted domain after processing the request.
     * </p>
     */
    inline void SetDomain(const DomainDescription& value) { m_domain = value; }

    /**
     * <p> Contains information about the deleted domain after processing the request.
     * </p>
     */
    inline void SetDomain(DomainDescription&& value) { m_domain = std::move(value); }

    /**
     * <p> Contains information about the deleted domain after processing the request.
     * </p>
     */
    inline DeleteDomainResult& WithDomain(const DomainDescription& value) { SetDomain(value); return *this;}

    /**
     * <p> Contains information about the deleted domain after processing the request.
     * </p>
     */
    inline DeleteDomainResult& WithDomain(DomainDescription&& value) { SetDomain(std::move(value)); return *this;}

  private:

    DomainDescription m_domain;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
