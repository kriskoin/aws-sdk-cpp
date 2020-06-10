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
#include <aws/core/utils/DateTime.h>
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
  class AWS_CODEARTIFACT_API GetAuthorizationTokenResult
  {
  public:
    GetAuthorizationTokenResult();
    GetAuthorizationTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAuthorizationTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The returned authentication token. </p>
     */
    inline const Aws::String& GetAuthorizationToken() const{ return m_authorizationToken; }

    /**
     * <p> The returned authentication token. </p>
     */
    inline void SetAuthorizationToken(const Aws::String& value) { m_authorizationToken = value; }

    /**
     * <p> The returned authentication token. </p>
     */
    inline void SetAuthorizationToken(Aws::String&& value) { m_authorizationToken = std::move(value); }

    /**
     * <p> The returned authentication token. </p>
     */
    inline void SetAuthorizationToken(const char* value) { m_authorizationToken.assign(value); }

    /**
     * <p> The returned authentication token. </p>
     */
    inline GetAuthorizationTokenResult& WithAuthorizationToken(const Aws::String& value) { SetAuthorizationToken(value); return *this;}

    /**
     * <p> The returned authentication token. </p>
     */
    inline GetAuthorizationTokenResult& WithAuthorizationToken(Aws::String&& value) { SetAuthorizationToken(std::move(value)); return *this;}

    /**
     * <p> The returned authentication token. </p>
     */
    inline GetAuthorizationTokenResult& WithAuthorizationToken(const char* value) { SetAuthorizationToken(value); return *this;}


    /**
     * <p> A timestamp that specifies the date and time the authorization token
     * expires. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }

    /**
     * <p> A timestamp that specifies the date and time the authorization token
     * expires. </p>
     */
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expiration = value; }

    /**
     * <p> A timestamp that specifies the date and time the authorization token
     * expires. </p>
     */
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expiration = std::move(value); }

    /**
     * <p> A timestamp that specifies the date and time the authorization token
     * expires. </p>
     */
    inline GetAuthorizationTokenResult& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}

    /**
     * <p> A timestamp that specifies the date and time the authorization token
     * expires. </p>
     */
    inline GetAuthorizationTokenResult& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}

  private:

    Aws::String m_authorizationToken;

    Aws::Utils::DateTime m_expiration;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
