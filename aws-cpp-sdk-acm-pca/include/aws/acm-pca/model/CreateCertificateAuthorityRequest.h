﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/acm-pca/model/CertificateAuthorityConfiguration.h>
#include <aws/acm-pca/model/RevocationConfiguration.h>
#include <aws/acm-pca/model/CertificateAuthorityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/KeyStorageSecurityStandard.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm-pca/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class AWS_ACMPCA_API CreateCertificateAuthorityRequest : public ACMPCARequest
  {
  public:
    CreateCertificateAuthorityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCertificateAuthority"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name and bit size of the private key algorithm, the name of the signing
     * algorithm, and X.500 certificate subject information.</p>
     */
    inline const CertificateAuthorityConfiguration& GetCertificateAuthorityConfiguration() const{ return m_certificateAuthorityConfiguration; }

    /**
     * <p>Name and bit size of the private key algorithm, the name of the signing
     * algorithm, and X.500 certificate subject information.</p>
     */
    inline bool CertificateAuthorityConfigurationHasBeenSet() const { return m_certificateAuthorityConfigurationHasBeenSet; }

    /**
     * <p>Name and bit size of the private key algorithm, the name of the signing
     * algorithm, and X.500 certificate subject information.</p>
     */
    inline void SetCertificateAuthorityConfiguration(const CertificateAuthorityConfiguration& value) { m_certificateAuthorityConfigurationHasBeenSet = true; m_certificateAuthorityConfiguration = value; }

    /**
     * <p>Name and bit size of the private key algorithm, the name of the signing
     * algorithm, and X.500 certificate subject information.</p>
     */
    inline void SetCertificateAuthorityConfiguration(CertificateAuthorityConfiguration&& value) { m_certificateAuthorityConfigurationHasBeenSet = true; m_certificateAuthorityConfiguration = std::move(value); }

    /**
     * <p>Name and bit size of the private key algorithm, the name of the signing
     * algorithm, and X.500 certificate subject information.</p>
     */
    inline CreateCertificateAuthorityRequest& WithCertificateAuthorityConfiguration(const CertificateAuthorityConfiguration& value) { SetCertificateAuthorityConfiguration(value); return *this;}

    /**
     * <p>Name and bit size of the private key algorithm, the name of the signing
     * algorithm, and X.500 certificate subject information.</p>
     */
    inline CreateCertificateAuthorityRequest& WithCertificateAuthorityConfiguration(CertificateAuthorityConfiguration&& value) { SetCertificateAuthorityConfiguration(std::move(value)); return *this;}


    /**
     * <p>Contains a Boolean value that you can use to enable a certification
     * revocation list (CRL) for the CA, the name of the S3 bucket to which ACM Private
     * CA will write the CRL, and an optional CNAME alias that you can use to hide the
     * name of your bucket in the <b>CRL Distribution Points</b> extension of your CA
     * certificate. For more information, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CrlConfiguration.html">CrlConfiguration</a>
     * structure. </p>
     */
    inline const RevocationConfiguration& GetRevocationConfiguration() const{ return m_revocationConfiguration; }

    /**
     * <p>Contains a Boolean value that you can use to enable a certification
     * revocation list (CRL) for the CA, the name of the S3 bucket to which ACM Private
     * CA will write the CRL, and an optional CNAME alias that you can use to hide the
     * name of your bucket in the <b>CRL Distribution Points</b> extension of your CA
     * certificate. For more information, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CrlConfiguration.html">CrlConfiguration</a>
     * structure. </p>
     */
    inline bool RevocationConfigurationHasBeenSet() const { return m_revocationConfigurationHasBeenSet; }

    /**
     * <p>Contains a Boolean value that you can use to enable a certification
     * revocation list (CRL) for the CA, the name of the S3 bucket to which ACM Private
     * CA will write the CRL, and an optional CNAME alias that you can use to hide the
     * name of your bucket in the <b>CRL Distribution Points</b> extension of your CA
     * certificate. For more information, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CrlConfiguration.html">CrlConfiguration</a>
     * structure. </p>
     */
    inline void SetRevocationConfiguration(const RevocationConfiguration& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = value; }

    /**
     * <p>Contains a Boolean value that you can use to enable a certification
     * revocation list (CRL) for the CA, the name of the S3 bucket to which ACM Private
     * CA will write the CRL, and an optional CNAME alias that you can use to hide the
     * name of your bucket in the <b>CRL Distribution Points</b> extension of your CA
     * certificate. For more information, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CrlConfiguration.html">CrlConfiguration</a>
     * structure. </p>
     */
    inline void SetRevocationConfiguration(RevocationConfiguration&& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = std::move(value); }

    /**
     * <p>Contains a Boolean value that you can use to enable a certification
     * revocation list (CRL) for the CA, the name of the S3 bucket to which ACM Private
     * CA will write the CRL, and an optional CNAME alias that you can use to hide the
     * name of your bucket in the <b>CRL Distribution Points</b> extension of your CA
     * certificate. For more information, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CrlConfiguration.html">CrlConfiguration</a>
     * structure. </p>
     */
    inline CreateCertificateAuthorityRequest& WithRevocationConfiguration(const RevocationConfiguration& value) { SetRevocationConfiguration(value); return *this;}

    /**
     * <p>Contains a Boolean value that you can use to enable a certification
     * revocation list (CRL) for the CA, the name of the S3 bucket to which ACM Private
     * CA will write the CRL, and an optional CNAME alias that you can use to hide the
     * name of your bucket in the <b>CRL Distribution Points</b> extension of your CA
     * certificate. For more information, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CrlConfiguration.html">CrlConfiguration</a>
     * structure. </p>
     */
    inline CreateCertificateAuthorityRequest& WithRevocationConfiguration(RevocationConfiguration&& value) { SetRevocationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The type of the certificate authority.</p>
     */
    inline const CertificateAuthorityType& GetCertificateAuthorityType() const{ return m_certificateAuthorityType; }

    /**
     * <p>The type of the certificate authority.</p>
     */
    inline bool CertificateAuthorityTypeHasBeenSet() const { return m_certificateAuthorityTypeHasBeenSet; }

    /**
     * <p>The type of the certificate authority.</p>
     */
    inline void SetCertificateAuthorityType(const CertificateAuthorityType& value) { m_certificateAuthorityTypeHasBeenSet = true; m_certificateAuthorityType = value; }

    /**
     * <p>The type of the certificate authority.</p>
     */
    inline void SetCertificateAuthorityType(CertificateAuthorityType&& value) { m_certificateAuthorityTypeHasBeenSet = true; m_certificateAuthorityType = std::move(value); }

    /**
     * <p>The type of the certificate authority.</p>
     */
    inline CreateCertificateAuthorityRequest& WithCertificateAuthorityType(const CertificateAuthorityType& value) { SetCertificateAuthorityType(value); return *this;}

    /**
     * <p>The type of the certificate authority.</p>
     */
    inline CreateCertificateAuthorityRequest& WithCertificateAuthorityType(CertificateAuthorityType&& value) { SetCertificateAuthorityType(std::move(value)); return *this;}


    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>CreateCertificateAuthority</b> action. Idempotency tokens for
     * <b>CreateCertificateAuthority</b> time out after five minutes. Therefore, if you
     * call <b>CreateCertificateAuthority</b> multiple times with the same idempotency
     * token within five minutes, ACM Private CA recognizes that you are requesting
     * only certificate authority and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificate authorities.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>CreateCertificateAuthority</b> action. Idempotency tokens for
     * <b>CreateCertificateAuthority</b> time out after five minutes. Therefore, if you
     * call <b>CreateCertificateAuthority</b> multiple times with the same idempotency
     * token within five minutes, ACM Private CA recognizes that you are requesting
     * only certificate authority and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificate authorities.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>CreateCertificateAuthority</b> action. Idempotency tokens for
     * <b>CreateCertificateAuthority</b> time out after five minutes. Therefore, if you
     * call <b>CreateCertificateAuthority</b> multiple times with the same idempotency
     * token within five minutes, ACM Private CA recognizes that you are requesting
     * only certificate authority and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificate authorities.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>CreateCertificateAuthority</b> action. Idempotency tokens for
     * <b>CreateCertificateAuthority</b> time out after five minutes. Therefore, if you
     * call <b>CreateCertificateAuthority</b> multiple times with the same idempotency
     * token within five minutes, ACM Private CA recognizes that you are requesting
     * only certificate authority and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificate authorities.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>CreateCertificateAuthority</b> action. Idempotency tokens for
     * <b>CreateCertificateAuthority</b> time out after five minutes. Therefore, if you
     * call <b>CreateCertificateAuthority</b> multiple times with the same idempotency
     * token within five minutes, ACM Private CA recognizes that you are requesting
     * only certificate authority and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificate authorities.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>CreateCertificateAuthority</b> action. Idempotency tokens for
     * <b>CreateCertificateAuthority</b> time out after five minutes. Therefore, if you
     * call <b>CreateCertificateAuthority</b> multiple times with the same idempotency
     * token within five minutes, ACM Private CA recognizes that you are requesting
     * only certificate authority and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificate authorities.</p>
     */
    inline CreateCertificateAuthorityRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>CreateCertificateAuthority</b> action. Idempotency tokens for
     * <b>CreateCertificateAuthority</b> time out after five minutes. Therefore, if you
     * call <b>CreateCertificateAuthority</b> multiple times with the same idempotency
     * token within five minutes, ACM Private CA recognizes that you are requesting
     * only certificate authority and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificate authorities.</p>
     */
    inline CreateCertificateAuthorityRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>Custom string that can be used to distinguish between calls to the
     * <b>CreateCertificateAuthority</b> action. Idempotency tokens for
     * <b>CreateCertificateAuthority</b> time out after five minutes. Therefore, if you
     * call <b>CreateCertificateAuthority</b> multiple times with the same idempotency
     * token within five minutes, ACM Private CA recognizes that you are requesting
     * only certificate authority and will issue only one. If you change the
     * idempotency token for each call, PCA recognizes that you are requesting multiple
     * certificate authorities.</p>
     */
    inline CreateCertificateAuthorityRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p>Specifies a cryptographic key management compliance standard used for
     * handling CA keys.</p> <p>Default: FIPS_140_2_LEVEL_3_OR_HIGHER</p> <p>Note: AWS
     * Region ap-northeast-3 supports only FIPS_140_2_LEVEL_2_OR_HIGHER. You must
     * explicitly specify this parameter and value when creating a CA in that Region.
     * Specifying a different value (or no value) results in an
     * <code>InvalidArgsException</code> with the message "A certificate authority
     * cannot be created in this region with the specified security standard."</p>
     */
    inline const KeyStorageSecurityStandard& GetKeyStorageSecurityStandard() const{ return m_keyStorageSecurityStandard; }

    /**
     * <p>Specifies a cryptographic key management compliance standard used for
     * handling CA keys.</p> <p>Default: FIPS_140_2_LEVEL_3_OR_HIGHER</p> <p>Note: AWS
     * Region ap-northeast-3 supports only FIPS_140_2_LEVEL_2_OR_HIGHER. You must
     * explicitly specify this parameter and value when creating a CA in that Region.
     * Specifying a different value (or no value) results in an
     * <code>InvalidArgsException</code> with the message "A certificate authority
     * cannot be created in this region with the specified security standard."</p>
     */
    inline bool KeyStorageSecurityStandardHasBeenSet() const { return m_keyStorageSecurityStandardHasBeenSet; }

    /**
     * <p>Specifies a cryptographic key management compliance standard used for
     * handling CA keys.</p> <p>Default: FIPS_140_2_LEVEL_3_OR_HIGHER</p> <p>Note: AWS
     * Region ap-northeast-3 supports only FIPS_140_2_LEVEL_2_OR_HIGHER. You must
     * explicitly specify this parameter and value when creating a CA in that Region.
     * Specifying a different value (or no value) results in an
     * <code>InvalidArgsException</code> with the message "A certificate authority
     * cannot be created in this region with the specified security standard."</p>
     */
    inline void SetKeyStorageSecurityStandard(const KeyStorageSecurityStandard& value) { m_keyStorageSecurityStandardHasBeenSet = true; m_keyStorageSecurityStandard = value; }

    /**
     * <p>Specifies a cryptographic key management compliance standard used for
     * handling CA keys.</p> <p>Default: FIPS_140_2_LEVEL_3_OR_HIGHER</p> <p>Note: AWS
     * Region ap-northeast-3 supports only FIPS_140_2_LEVEL_2_OR_HIGHER. You must
     * explicitly specify this parameter and value when creating a CA in that Region.
     * Specifying a different value (or no value) results in an
     * <code>InvalidArgsException</code> with the message "A certificate authority
     * cannot be created in this region with the specified security standard."</p>
     */
    inline void SetKeyStorageSecurityStandard(KeyStorageSecurityStandard&& value) { m_keyStorageSecurityStandardHasBeenSet = true; m_keyStorageSecurityStandard = std::move(value); }

    /**
     * <p>Specifies a cryptographic key management compliance standard used for
     * handling CA keys.</p> <p>Default: FIPS_140_2_LEVEL_3_OR_HIGHER</p> <p>Note: AWS
     * Region ap-northeast-3 supports only FIPS_140_2_LEVEL_2_OR_HIGHER. You must
     * explicitly specify this parameter and value when creating a CA in that Region.
     * Specifying a different value (or no value) results in an
     * <code>InvalidArgsException</code> with the message "A certificate authority
     * cannot be created in this region with the specified security standard."</p>
     */
    inline CreateCertificateAuthorityRequest& WithKeyStorageSecurityStandard(const KeyStorageSecurityStandard& value) { SetKeyStorageSecurityStandard(value); return *this;}

    /**
     * <p>Specifies a cryptographic key management compliance standard used for
     * handling CA keys.</p> <p>Default: FIPS_140_2_LEVEL_3_OR_HIGHER</p> <p>Note: AWS
     * Region ap-northeast-3 supports only FIPS_140_2_LEVEL_2_OR_HIGHER. You must
     * explicitly specify this parameter and value when creating a CA in that Region.
     * Specifying a different value (or no value) results in an
     * <code>InvalidArgsException</code> with the message "A certificate authority
     * cannot be created in this region with the specified security standard."</p>
     */
    inline CreateCertificateAuthorityRequest& WithKeyStorageSecurityStandard(KeyStorageSecurityStandard&& value) { SetKeyStorageSecurityStandard(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs that will be attached to the new private CA. You can
     * associate up to 50 tags with a private CA. For information using tags with IAM
     * to manage permissions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs that will be attached to the new private CA. You can
     * associate up to 50 tags with a private CA. For information using tags with IAM
     * to manage permissions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs that will be attached to the new private CA. You can
     * associate up to 50 tags with a private CA. For information using tags with IAM
     * to manage permissions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs that will be attached to the new private CA. You can
     * associate up to 50 tags with a private CA. For information using tags with IAM
     * to manage permissions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs that will be attached to the new private CA. You can
     * associate up to 50 tags with a private CA. For information using tags with IAM
     * to manage permissions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p>
     */
    inline CreateCertificateAuthorityRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs that will be attached to the new private CA. You can
     * associate up to 50 tags with a private CA. For information using tags with IAM
     * to manage permissions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p>
     */
    inline CreateCertificateAuthorityRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that will be attached to the new private CA. You can
     * associate up to 50 tags with a private CA. For information using tags with IAM
     * to manage permissions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p>
     */
    inline CreateCertificateAuthorityRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that will be attached to the new private CA. You can
     * associate up to 50 tags with a private CA. For information using tags with IAM
     * to manage permissions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
     * Access Using IAM Tags</a>.</p>
     */
    inline CreateCertificateAuthorityRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    CertificateAuthorityConfiguration m_certificateAuthorityConfiguration;
    bool m_certificateAuthorityConfigurationHasBeenSet;

    RevocationConfiguration m_revocationConfiguration;
    bool m_revocationConfigurationHasBeenSet;

    CertificateAuthorityType m_certificateAuthorityType;
    bool m_certificateAuthorityTypeHasBeenSet;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;

    KeyStorageSecurityStandard m_keyStorageSecurityStandard;
    bool m_keyStorageSecurityStandardHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
