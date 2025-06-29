// Copyright 2019 The MediaPipe Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef JAVA_COM_GOOGLE_MEDIAPIPE_TASKS_CORE_JNI_LLM_H_
#define JAVA_COM_GOOGLE_MEDIAPIPE_TASKS_CORE_JNI_LLM_H_

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

#define JNI_METHOD(METHOD_NAME) \
  Java_com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner_##METHOD_NAME

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeCreateEngine
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL JNI_METHOD(nativeCreateEngine)(JNIEnv *, jclass,
                                                       jbyteArray);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeDeleteEngine
 * Signature: (J)V
 */
JNIEXPORT void JNICALL JNI_METHOD(nativeDeleteEngine)(JNIEnv *, jclass, jlong);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeCreateSession
 * Signature: ([BJL)J
 */
JNIEXPORT jlong JNICALL JNI_METHOD(nativeCreateSession)(JNIEnv *, jclass,
                                                        jbyteArray, jlong);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeCloneSession
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL JNI_METHOD(nativeCloneSession)(JNIEnv *, jclass, jlong);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeDeleteSession
 * Signature: (J)V
 */
JNIEXPORT void JNICALL JNI_METHOD(nativeDeleteSession)(JNIEnv *, jclass, jlong);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeAddQueryChunk
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL JNI_METHOD(nativeAddQueryChunk)(JNIEnv *, jclass, jlong,
                                                       jstring);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeAddImage
 * Signature: (JLL)V
 */
JNIEXPORT void JNICALL JNI_METHOD(nativeAddImage)(JNIEnv *, jclass, jlong,
                                                  jlong);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeAddAudio
 * Signature: (JLL[B)V
 */
JNIEXPORT void JNICALL JNI_METHOD(nativeAddAudio)(JNIEnv *, jclass, jlong,
                                                  jlong, jbyteArray);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativePredictSync
 * Signature: (JL)[B
 */
JNIEXPORT jbyteArray JNICALL JNI_METHOD(nativePredictSync)(JNIEnv *, jclass,
                                                           jlong);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeRegisterCallback
 * Signature: (Ljava/lang/Object;)Ljava/lang/Object
 */
JNIEXPORT jobject JNICALL JNI_METHOD(nativeRegisterCallback)(JNIEnv *, jclass,
                                                             jobject);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeRemoveCallback
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL JNI_METHOD(nativeRemoveCallback)(JNIEnv *, jclass,
                                                        jobject);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativePredictAsync
 * Signature: (JLjava/lang/Object;)V
 */
JNIEXPORT void JNICALL JNI_METHOD(nativePredictAsync)(JNIEnv *, jclass, jlong,
                                                      jobject);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativePendingProcessCancellation
 * Signature: (JL)V
 */
JNIEXPORT void JNICALL JNI_METHOD(nativePendingProcessCancellation)(JNIEnv *,
                                                                    jclass,
                                                                    jlong);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeSizeInTokens
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL JNI_METHOD(nativeSizeInTokens)(JNIEnv *, jclass, jlong,
                                                      jstring);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeCreateSkBitmap
 * Signature: (Ljava/nio/ByteBuffer;IIII)J
 */
JNIEXPORT jlong JNICALL JNI_METHOD(nativeCreateSkBitmap)(JNIEnv *, jclass,
                                                         jobject, jint, jint,
                                                         jint, jint);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeDeleteSkBitmap
 * Signature: (J)V
 */
JNIEXPORT void JNICALL JNI_METHOD(nativeDeleteSkBitmap)(JNIEnv *, jclass,
                                                        jlong);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeGetSentencePieceProcessor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL JNI_METHOD(nativeGetSentencePieceProcessor)(JNIEnv *,
                                                                    jclass,
                                                                    jlong);

/*
 * Class:     com_google_mediapipe_tasks_genai_llminference_LlmTaskRunner
 * Method:    nativeUpdateSessionConfig
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL JNI_METHOD(nativeUpdateSessionConfig)(JNIEnv *, jclass,
                                                             jlong, jbyteArray);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus

#endif  // JAVA_COM_GOOGLE_MEDIAPIPE_TASKS_CORE_JNI_LLM_H_
