#pragma once

#include <glm/glm.hpp>

#include "Renderer/Shader.hpp"

namespace Frameio {

class OpenGLShader : public Shader {
public:
  OpenGLShader(const std::string vertexShaderSrc, const std::string fragmentShaderSrc);
  virtual ~OpenGLShader();

  virtual void Bind() const override;
  virtual void Unbind() const override;

  void UploadUniformFloat4(const std::string& name, const glm::vec4& value);
  void UploadUniformMat4(const std::string& name, const glm::mat4& value);

private:
  uint32_t m_RendererID;
};

} // namespace Frameio
